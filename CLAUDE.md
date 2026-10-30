# Doom 3 (GPL) — agent guide

The Doom 3 GPL source release (1.3.1.1702, GPLv3), modernized in place: the
VS2010 solution is replaced by a per-project CMake build, the jpeg-6 and
OggVorbis third-party trees are replaced by stb, the old Creative EAX /
eaxguid OpenAL wrappers are replaced by openal-soft with EFX, the bundled
curl headers are replaced by curl 8.23, and the old sdk asset builder is
replaced by a source sdk packer.

This file is mirrored (same content) as `CLAUDE.md` and
`.github/copilot-instructions.md`. When the structure changes, update all
three.

## Repository layout

- `neo/` — all engine code. This is the only directory with first-party
  source. One CMakeLists per original VS2010 project:
  - `idlib/` — the id container/math library, built as a static library.
  - `framework/`, `renderer/`, `sound/`, `cm/`, `dmap/`, `tools/` — engine
    code pulled into the single `doom3` target by the root CMakeLists.
  - `game/` — Doom 3 base game code, builds `bin/base/gamex86.dll`
    (`gamex86-base.so` on Linux).
  - `d3xp/` — Resurrection of Evil expansion game code, builds
    `bin/d3xp/gamex86.dll` (`gamex86-d3xp.so`).
  - `curl/` — the original prebuilt curl tree, kept for history. The build
    uses `third-party/curl` instead.
  - `sys/win32/`, `sys/linux/` — platform code (window, input, sound,
    GLimp; the Linux GLimp sources are generated from `.m4` templates).
  - `MayaImport/` — the Maya exporter plugin. Option-gated and OFF by
    default: it needs the Maya SDK, which is not in the GPL tree.
- `neo/third-party/` — vendored third-party code (stb, curl 8.23,
  openal-soft). All NEW third-party code goes here and only here.
- `tools/` — `gen_logfuncs.py` (Linux GLimp codegen helper) and
  `make_source_sdk.py` (source sdk packer).
- `.github/workflows/` — `build-windows.yml`, `build-ubuntu.yml`,
  `ci-publish.yml` (digest publication), `make-sdk.yml`.
- `bin/` — build output directory (ignored): `DOOM3.exe` / `doom.x86`,
  `base/`, `d3xp/`, `openal32.dll`.

## Hard rules

1. 32-bit only. The engine is Win32/x86 on MSVC and x86 (`-m32`) on GCC:
   `BUILD_STRING`, the inline asm and the `gamex86` names all assume i386.
   Do not add x64 configurations.
2. New third-party code goes to `neo/third-party/` only. Never scatter
   dependencies elsewhere.
3. Keep original copyright and license headers when vendoring. Doom 3 is
   GPLv3; stb is public domain / MIT; curl carries the curl license;
   openal-soft is LGPL. Note the provenance in the commit message.
4. Surgical, behavior-preserving edits. No gratuitous rewrites.
5. Commit messages: plain-English bullets, one logical change per commit,
   explaining what and why.
6. The EAX 4.0 struct layout in `neo/sound/efxlib.h` is a compatibility
   boundary: `.efx` files and reverb presets parse against it. Keep the
   struct layout, translate to EFX at load time.

## Build system

- `neo/CMakeLists.txt` is the CMake entry point, `neo/CMakePresets.json`
  ships configure/build presets. CMake 3.25 or newer is required.
- Toolchains: Visual Studio 17 2022, Win32 only, on Windows; GCC x86 with
  `-m32` on Linux (i386 multiarch dev packages required). The original
  solution was Win32-only; no x64 presets exist on purpose.
- Options: `DEDICATED`, `WITH_INLINES`, `WITH_MEMORY_LOG`, `MAYA_IMPORT`
  (OFF, needs the Maya SDK), `ID_ENABLE_CURL` (static curl 8.23, HTTP
  only; forced OFF on non-Windows like the old NOCURL build).
- Outputs, all under `bin/`: `DOOM3.exe` (Windows) / `doom.x86` (Linux),
  `base/gamex86.dll` / `d3xp/gamex86.dll` (game modules load from there
  at runtime), `gamex86-base.so` / `gamex86-d3xp.so` on Linux.
- Windows POST_BUILD copies `third-party/openal-soft/bin/Win32/soft_oal.dll`
  next to the engine as `openal32.dll`.
- The `typeinfo` build step generates `game/gamesys/GameTypeInfo.h` and
  `d3xp/gamesys/GameTypeInfo.h` by running the typeinfo exe over the game
  sources; these files are ignored and must never be committed.
- Source sdk: `cmake --build build --target sdk` (or the `make-sdk`
  workflow) packs the tree into `doom3-<version>-<build>-src.zip` at the
  repository root, deterministic, via `tools/make_source_sdk.py`.

## Third-party

- `neo/third-party/stb/` — `stb_image.h` (texture loading in
  `neo/renderer/Image_files.cpp`), `stb_image_write.h` (screenshot and
  image save paths), `stb_vorbis.c` (ogg decoding in
  `neo/sound/snd_decoder.cpp`). Replaced jpeg-6 and OggVorbis wholesale.
- `neo/third-party/curl/` — the full curl 8.23 source tree, built by its
  own upstream CMakeLists as `libcurl_static`, HTTP only, Schannel on
  Windows and OpenSSL (i386) on Linux. The engine links the static lib
  and gets `CURL_STATICLIB` from it; download code is
  `neo/framework/FileSystem.cpp`.
- `neo/third-party/openal-soft/` — OpenAL headers and Win32 import
  library. The EAX 4.0 preset code keeps its struct layout and speaks
  EFX through openal-soft.

## CI

`.github/workflows/` runs on every push to any branch:

1. `build-windows.yml` — windows-latest, MSVC Win32, x86 debug + release.
2. `build-ubuntu.yml` — ubuntu-latest, GCC x86 (`-m32`, i386 multiarch
   dev packages), debug + release.
3. `ci-publish.yml` — after the sibling runs finish, commits to the pushed
   branch a full `build.log` per platform, `build-digest.md` and
   `build-digest-compact.md`. The publishing commit carries `[skip ci]`
   to avoid loops.
4. `make-sdk.yml` — manual `workflow_dispatch`, packs the source sdk and
   uploads it as an artifact.

The repository auto-merges a pull request when its checks pass and
deletes the branch afterwards. A green PR is final: everything must be
fixed before merge, including warnings.

## CI iteration loop (mandatory after every push)

1. Commit the change.
2. Wait for the CI runs to finish. Never assume success.
3. Read `build-digest-compact.md` first (then `build-digest.md`, then the
   platform logs), at the exact HEAD sha of the branch.
4. Fix ALL errors AND warnings, surgically.
5. Commit the fix and repeat until fully green with zero warnings.

## Task map

| Task | Files |
|---|---|
| Texture loading / saving (tga, jpg, pcx...) | `neo/renderer/Image_files.cpp` (stb_image / stb_image_write) |
| Ogg Vorbis decoding | `neo/sound/snd_decoder.cpp` (stb_vorbis) |
| Reverb / EAX presets (.efx files) | `neo/sound/snd_system.cpp`, `snd_world.cpp`, `snd_cache.cpp`, `snd_efxfile.cpp`, `snd_local.h`, `efxlib.h` |
| OpenAL loading / device handling | `neo/sound/idal.h`, `neo/sound/idal.cpp`, `neo/sys/win32/win_snd.cpp` |
| Downloads (http get) | `neo/framework/FileSystem.cpp` (curl easy API, static HTTP-only curl) |
| Build wiring, output layout | `neo/CMakeLists.txt` plus the per-project CMakeLists |
| Linux GLimp codegen | `neo/sys/linux/*.m4`, `sys/gllog`, `tools/gen_logfuncs.py` |
| Game logic (base) | `neo/game/` |
| Game logic (expansion) | `neo/d3xp/` |
| Source sdk packing | `tools/make_source_sdk.py`, `sdk` target, `make-sdk.yml` |

## Roadmap

1. CMake port replacing the VS2010 solution (MSVC Win32 + GCC x86) — DONE.
2. Digest CI with auto-merge on green — DONE.
3. Third-party modernization: stb for jpeg/ogg, curl 8.23, openal-soft
   with EFX, `bin/` output layout — DONE.
4. Source sdk packer (tools/make_source_sdk.py + `sdk` target) — DONE.
5. Keep the build at zero errors and zero warnings on both platforms.
