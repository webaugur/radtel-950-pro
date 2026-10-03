#!/bin/sh
# Start the one CPS binary in this directory.
set -eu

ROOT=$(CDPATH= cd -- "$(dirname "$0")" && pwd)

if [ ! -x "$ROOT/rt950-cps" ]; then
    echo "Missing $ROOT/rt950-cps. Run tools/usb-stick/stage.sh on the build machine first." >&2
    exit 1
fi

if ! id -nG | tr ' ' '\n' | grep -qx dialout; then
    echo "This user is not in the dialout group, so /dev/ttyUSB0 may not open." >&2
    echo "Run sh setup.sh, then log out and back in." >&2
fi

cd "$ROOT"
exec "$ROOT/rt950-cps" "$@"
