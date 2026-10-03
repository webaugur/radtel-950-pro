#!/bin/sh
# Run the RT-950 CPS from this directory. A .950pro file needs only this
# program. Mono and BT-RT950PRO_CPS.exe are used for a .dat file and for
# reading or writing the radio. ./setup.sh installs Mono. The window does
# not need Python.
set -eu

ROOT=$(CDPATH= cd -- "$(dirname "$0")" && pwd)

if [ ! -x "$ROOT/rt950-cps" ]; then
    echo "Missing $ROOT/rt950-cps. Run tools/usb-stick/stage.sh on the build machine first." >&2
    exit 1
fi

if [ -z "${RT950_CPS_EXE:-}" ] && [ -f "$ROOT/cps/BT-RT950PRO_CPS.exe" ]; then
    export RT950_CPS_EXE="$ROOT/cps/BT-RT950PRO_CPS.exe"
fi

oem_missing=""
command -v mono >/dev/null 2>&1 || oem_missing="$oem_missing mono"
if [ -n "${RT950_CPS_EXE:-}" ]; then
    [ -f "$RT950_CPS_EXE" ] || oem_missing="$oem_missing BT-RT950PRO_CPS.exe"
elif [ ! -f "$ROOT/cps/BT-RT950PRO_CPS.exe" ]; then
    oem_missing="$oem_missing BT-RT950PRO_CPS.exe"
fi
if [ -n "$oem_missing" ]; then
    echo "OEM codeplug support is not installed:$oem_missing" >&2
    echo ".950pro files still open and save. For a .dat file or the radio, run: sh setup.sh" >&2
fi
if ! id -nG | tr ' ' '\n' | grep -qx dialout; then
    echo "This user is not in the dialout group, so /dev/ttyUSB0 may not open." >&2
    echo "Run sh setup.sh, then log out and back in." >&2
fi

cd "$ROOT"
exec "$ROOT/rt950-cps" "$@"
