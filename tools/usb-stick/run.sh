#!/bin/sh
# Run the RT-950 CPS from this directory. Copy the whole directory onto a
# USB stick, plug it into an Ubuntu desktop, and run ./run.sh.
# The stick does not contain Python, Mono, or the graphics libraries.
# Ubuntu packages, once per machine:
#   sudo apt install python3 python3-serial mono-runtime mono-libraries
# The user also has to be in the dialout group to open /dev/ttyUSB0.
set -eu

ROOT=$(CDPATH= cd -- "$(dirname "$0")" && pwd)
export RT950_CPS_EXE="${RT950_CPS_EXE:-$ROOT/cps/BT-RT950PRO_CPS.exe}"

missing=""
command -v python3 >/dev/null 2>&1 || missing="$missing python3"
python3 -c 'import serial' >/dev/null 2>&1 || missing="$missing python3-serial"
command -v mono >/dev/null 2>&1 || missing="$missing mono-runtime mono-libraries"
if [ -n "$missing" ]; then
    echo "This Ubuntu machine is missing:$missing" >&2
    echo "Install them with: sudo apt install python3 python3-serial mono-runtime mono-libraries" >&2
    exit 1
fi
if [ ! -x "$ROOT/rt950-cps" ]; then
    echo "Missing $ROOT/rt950-cps. Run tools/usb-stick/stage.sh on the build machine first." >&2
    exit 1
fi
if [ ! -f "$RT950_CPS_EXE" ]; then
    echo "Missing CPS program: $RT950_CPS_EXE" >&2
    exit 1
fi
if [ ! -f "$ROOT/firmware/scripts/radtel_cps.py" ]; then
    echo "Missing $ROOT/firmware/scripts/radtel_cps.py" >&2
    exit 1
fi
if ! id -nG | tr ' ' '\n' | grep -qx dialout; then
    echo "This user is not in the dialout group, so /dev/ttyUSB0 may not open." >&2
    echo "sudo usermod -aG dialout \"\$USER\"  then log out and back in." >&2
fi

cd "$ROOT"
exec "$ROOT/rt950-cps" "$@"
