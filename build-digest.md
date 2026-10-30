# Build digest

commit: e8eac8e0b3f1

- ubuntu-latest-x86-debug: success
- ubuntu-latest-x86-release: success
- windows-latest-x86-debug: failure
- windows-latest-x86-release: cancelled

## ubuntu-latest-x86-debug

status: success

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

## ubuntu-latest-x86-release

status: success

errors: 0
warnings: 2 in 1 kinds

### errors


### failure context


### warning kinds

- [2x] writing 1 byte into a region of size 0 [-Wstringop-overflow=]
  - /home/runner/work/doom3.gpl/doom3.gpl/neo/sys/linux/main.cpp:142:28: warning: writing 1 byte into a region of size 0 [-Wstringop-overflow=]

## windows-latest-x86-debug

status: failure

errors: 32
warnings: 0 in 0 kinds

### errors

Common.obj : error LNK2019: unresolved external symbol "void __cdecl RadiantInit(void)" (?RadiantInit@@YAXXZ) referenced in function __catch$?Init@idCommonLocal@@UAEXHPAPBDPBD@Z$0 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
Common.obj : error LNK2019: unresolved external symbol "void __cdecl LightEditorInit(class idDict const *)" (?LightEditorInit@@YAXPBVidDict@@@Z) referenced in function __catch$?Frame@idCommonLocal@@UAEXXZ$0 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
Common.obj : error LNK2019: unresolved external symbol "void __cdecl SoundEditorInit(class idDict const *)" (?SoundEditorInit@@YAXPBVidDict@@@Z) referenced in function __catch$?Frame@idCommonLocal@@UAEXXZ$0 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
Common.obj : error LNK2019: unresolved external symbol "void __cdecl AFEditorInit(class idDict const *)" (?AFEditorInit@@YAXPBVidDict@@@Z) referenced in function __catch$?Frame@idCommonLocal@@UAEXXZ$0 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
Common.obj : error LNK2019: unresolved external symbol "void __cdecl ParticleEditorInit(class idDict const *)" (?ParticleEditorInit@@YAXPBVidDict@@@Z) referenced in function __catch$?Frame@idCommonLocal@@UAEXXZ$0 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
Common.obj : error LNK2019: unresolved external symbol "void __cdecl PDAEditorInit(class idDict const *)" (?PDAEditorInit@@YAXPBVidDict@@@Z) referenced in function __catch$?Frame@idCommonLocal@@UAEXXZ$0 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
Common.obj : error LNK2019: unresolved external symbol "void __cdecl ScriptEditorInit(class idDict const *)" (?ScriptEditorInit@@YAXPBVidDict@@@Z) referenced in function __catch$?Frame@idCommonLocal@@UAEXXZ$0 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
Common.obj : error LNK2019: unresolved external symbol "void __cdecl DeclBrowserInit(class idDict const *)" (?DeclBrowserInit@@YAXPBVidDict@@@Z) referenced in function __catch$?Frame@idCommonLocal@@UAEXXZ$0 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
Common.obj : error LNK2019: unresolved external symbol "void __cdecl GUIEditorInit(void)" (?GUIEditorInit@@YAXXZ) referenced in function __catch$?Frame@idCommonLocal@@UAEXXZ$0 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
Common.obj : error LNK2019: unresolved external symbol "void __cdecl MaterialEditorInit(void)" (?MaterialEditorInit@@YAXXZ) referenced in function __catch$?Frame@idCommonLocal@@UAEXXZ$0 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
Console.obj : error LNK2019: unresolved external symbol "void __cdecl RadiantPrint(char const *)" (?RadiantPrint@@YAXPBD@Z) referenced in function "public: virtual void __thiscall idConsoleLocal::Print(char const *)" (?Print@idConsoleLocal@@UAEXPBD@Z) [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
Console.obj : error LNK2019: unresolved external symbol "void __cdecl MaterialEditorPrintConsole(char const *)" (?MaterialEditorPrintConsole@@YAXPBD@Z) referenced in function "public: virtual void __thiscall idConsoleLocal::Print(char const *)" (?Print@idConsoleLocal@@UAEXPBD@Z) [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
FileSystem.obj : error LNK2019: unresolved external symbol __imp__curl_easy_init referenced in function "unsigned int __cdecl BackgroundDownloadThread(void *)" (?BackgroundDownloadThread@@YAIPAX@Z) [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
FileSystem.obj : error LNK2019: unresolved external symbol __imp__curl_easy_setopt referenced in function "unsigned int __cdecl BackgroundDownloadThread(void *)" (?BackgroundDownloadThread@@YAIPAX@Z) [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
FileSystem.obj : error LNK2019: unresolved external symbol __imp__curl_easy_perform referenced in function "unsigned int __cdecl BackgroundDownloadThread(void *)" (?BackgroundDownloadThread@@YAIPAX@Z) [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
Window.obj : error LNK2019: unresolved external symbol "public: __thiscall rvGEWindowWrapper::rvGEWindowWrapper(class idWindow *,enum rvGEWindowWrapper::EWindowType)" (??0rvGEWindowWrapper@@QAE@PAVidWindow@@W4EWindowType@0@@Z) referenced in function "public: virtual bool __thiscall idWindow::Parse(class idParser *,bool)" (?Parse@idWindow@@UAE_NPAVidParser@@_N@Z) [D:\a\doom3.gpl\doom3.gpl\build\doo
Window.obj : error LNK2019: unresolved external symbol "public: static class rvGEWindowWrapper * __cdecl rvGEWindowWrapper::GetWrapper(class idWindow *)" (?GetWrapper@rvGEWindowWrapper@@SAPAV1@PAVidWindow@@@Z) referenced in function "public: virtual bool __thiscall idWindow::Parse(class idParser *,bool)" (?Parse@idWindow@@UAE_NPAVidParser@@_N@Z) [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
Window.obj : error LNK2019: unresolved external symbol "public: void __thiscall rvGEWindowWrapper::SetStateKey(char const *,char const *,bool)" (?SetStateKey@rvGEWindowWrapper@@QAEXPBD0_N@Z) referenced in function "public: virtual bool __thiscall idWindow::Parse(class idParser *,bool)" (?Parse@idWindow@@UAE_NPAVidParser@@_N@Z) [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
Window.obj : error LNK2019: unresolved external symbol "public: void __thiscall rvGEWindowWrapper::Finish(void)" (?Finish@rvGEWindowWrapper@@QAEXXZ) referenced in function "public: virtual bool __thiscall idWindow::Parse(class idParser *,bool)" (?Parse@idWindow@@UAE_NPAVidParser@@_N@Z) [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
win_main.obj : error LNK2019: unresolved external symbol "void __cdecl RadiantRun(void)" (?RadiantRun@@YAXXZ) referenced in function _WinMain@16 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
win_main.obj : error LNK2019: unresolved external symbol "void __cdecl LightEditorRun(void)" (?LightEditorRun@@YAXXZ) referenced in function _WinMain@16 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
win_main.obj : error LNK2019: unresolved external symbol "void __cdecl SoundEditorRun(void)" (?SoundEditorRun@@YAXXZ) referenced in function _WinMain@16 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
win_main.obj : error LNK2019: unresolved external symbol "void __cdecl AFEditorRun(void)" (?AFEditorRun@@YAXXZ) referenced in function _WinMain@16 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
win_main.obj : error LNK2019: unresolved external symbol "void __cdecl ParticleEditorRun(void)" (?ParticleEditorRun@@YAXXZ) referenced in function _WinMain@16 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
win_main.obj : error LNK2019: unresolved external symbol "void __cdecl PDAEditorRun(void)" (?PDAEditorRun@@YAXXZ) referenced in function _WinMain@16 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
win_main.obj : error LNK2019: unresolved external symbol "void __cdecl ScriptEditorRun(void)" (?ScriptEditorRun@@YAXXZ) referenced in function _WinMain@16 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
win_main.obj : error LNK2019: unresolved external symbol "void __cdecl DeclBrowserRun(void)" (?DeclBrowserRun@@YAXXZ) referenced in function _WinMain@16 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
win_main.obj : error LNK2019: unresolved external symbol "void __cdecl GUIEditorRun(void)" (?GUIEditorRun@@YAXXZ) referenced in function _WinMain@16 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
win_main.obj : error LNK2019: unresolved external symbol "bool __cdecl GUIEditorHandleMessage(void *)" (?GUIEditorHandleMessage@@YA_NPAX@Z) referenced in function "void __cdecl Sys_PumpEvents(void)" (?Sys_PumpEvents@@YAXXZ) [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
win_main.obj : error LNK2019: unresolved external symbol "void __cdecl MaterialEditorRun(void)" (?MaterialEditorRun@@YAXXZ) referenced in function _WinMain@16 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
win_main.obj : error LNK2019: unresolved external symbol "void __cdecl DisableTaskKeys(int,int,int)" (?DisableTaskKeys@@YAXHHH@Z) referenced in function _WinMain@16 [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]
D:\a\doom3.gpl\doom3.gpl\DOOM3.exe : fatal error LNK1120: 31 unresolved externals [D:\a\doom3.gpl\doom3.gpl\build\doom3.vcxproj]

### failure context


### warning kinds

## windows-latest-x86-release

status: cancelled

errors: 0
warnings: 0 in 0 kinds

### errors


### failure context


### warning kinds

