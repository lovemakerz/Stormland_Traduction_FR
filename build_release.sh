#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")" && pwd)"
BUILD="$ROOT/build"
mkdir -p "$BUILD"
cd "$BUILD"
cp "$ROOT/assets/skin_1200x675.bgra" skin.bgra
objcopy -I binary -O pe-x86-64 -B i386:x86-64 skin.bgra skin.obj
for d in kernel32 user32 gdi32 shell32 advapi32 ole32; do
  lld-link /Brepro /timestamp:0 /dll /noentry /machine:x64 /def:"$ROOT/defs/$d.def" /out:"$d-dummy.dll" /implib:"$d.lib" >/dev/null
done
clang-cl --target=x86_64-pc-windows-msvc /c /O2 /GS- /utf-8 /W4 /WX /Fo:stormland_v11.obj "$ROOT/src/stormland_v11_portable_ui.c"
clang --target=x86_64-pc-windows-msvc -c "$ROOT/src/chkstk.s" -o chkstk.obj
lld-link /Brepro /timestamp:0 /out:stub.exe /subsystem:windows /stack:4194304,65536 /entry:WinMainCRTStartup /nodefaultlib /machine:x64 /opt:ref /opt:icf stormland_v11.obj chkstk.obj skin.obj kernel32.lib user32.lib gdi32.lib shell32.lib advapi32.lib ole32.lib
python "$ROOT/tools/make_manifest.py" "$ROOT/payload" "$ROOT/payload_manifest.json"
python "$ROOT/tools/pack_payload.py" stub.exe "$ROOT/payload" "$BUILD/Stormland_FR_Traduction_V1.1.2_PORTABLE.exe"
python "$ROOT/tools/verify_exe_payload.py" "$BUILD/Stormland_FR_Traduction_V1.1.2_PORTABLE.exe" "$ROOT/payload_manifest.json"
sha256sum "$BUILD/Stormland_FR_Traduction_V1.1.2_PORTABLE.exe"
