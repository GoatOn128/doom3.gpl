#!/usr/bin/env python3
# Packs the repository source tree into the source sdk zip. The old sdk
# builder shipped game assets, this one ships source: everything needed to
# configure and build the engine, nothing that a build produces.
#
# The archive name comes from framework/Licensee.h ( ENGINE_VERSION ) and
# framework/BuildVersion.h ( BUILD_NUMBER ), the zip is deterministic, the
# same tree always packs to the same bytes.

import re
import sys
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent

# directories that never contain source ( matched at any depth )
SKIP_DIRS = {".git", "build", "out", "bin", "__pycache__", "ipch", "artifacts", ".vs"}

# file suffixes that never belong in a source package
SKIP_SUFFIXES = {".o", ".obj", ".os", ".pdb", ".res", ".map", ".a", ".lib",
                 ".exe", ".dll", ".so", ".zip", ".pyc", ".suo", ".user"}

# generated files the typeinfo step writes into the tree
GENERATED = {
    Path("neo/game/gamesys/GameTypeInfo.h"),
    Path("neo/d3xp/gamesys/GameTypeInfo.h"),
}

# files the CI digest loop drops at the repository root
SKIP_FILES = {"build.log", "build-digest.md", "build-digest-compact.md"}


def read_version():
    # "DOOM 1.3.1" -> "1.3.1", keep it readable in the archive name
    licensee = (ROOT / "neo/framework/Licensee.h").read_text(encoding="utf-8")
    raw = re.search(r'#define\s+ENGINE_VERSION\s+"([^"]*)"', licensee).group(1)
    version = re.sub(r"(?i)doom\s*", "", raw).strip()
    buildver = (ROOT / "neo/framework/BuildVersion.h").read_text(encoding="utf-8")
    build = re.search(r"BUILD_NUMBER\s*=\s*(\d+)", buildver).group(1)
    return version, build


def collect():
    files = []
    for path in sorted(ROOT.rglob("*")):
        rel = path.relative_to(ROOT)
        if path.is_dir():
            continue
        # skip anything under a build or IDE directory
        if any(part in SKIP_DIRS or part.startswith("build-") for part in rel.parts[:-1]):
            continue
        if rel.suffix.lower() in SKIP_SUFFIXES:
            continue
        if rel in GENERATED or rel.name in SKIP_FILES:
            continue
        # the per run digest fragments and status markers
        name = rel.name
        if name.startswith("log-") or name.startswith("digest-fragment-") or name.startswith("status-"):
            continue
        files.append(rel)
    return files


def pack(version, build, files):
    out_name = f"doom3-{version}-{build}-src.zip"
    out_path = ROOT / out_name
    # fixed timestamp and attributes so the zip is reproducible
    with zipfile.ZipFile(out_path, "w", zipfile.ZIP_DEFLATED, compresslevel=9) as zf:
        for rel in files:
            info = zipfile.ZipInfo(str(rel), date_time=(1980, 1, 1, 0, 0, 0))
            info.compress_type = zipfile.ZIP_DEFLATED
            info.external_attr = 0o644 << 16
            zf.writestr(info, (ROOT / rel).read_bytes())
    return out_path, out_name


def main():
    version, build = read_version()
    files = collect()
    out_path, out_name = pack(version, build, files)
    print(f"{out_name}: {len(files)} files")
    return 0


if __name__ == "__main__":
    sys.exit(main())
