#!/bin/sh
# Build a directory you can copy onto a USB stick and run on Ubuntu.
# Usage: tools/usb-stick/stage.sh [destination]
# Default destination is dist/rt950-usb inside the radtel repo.
set -eu

SCRIPT_DIR=$(CDPATH= cd -- "$(dirname "$0")" && pwd)
REPO=$(CDPATH= cd -- "$SCRIPT_DIR/../.." && pwd)
DEST=${1:-$REPO/dist/rt950-usb}
CPS_SRC=${RT950_CPS_EXE:-"$HOME/Applications/Radtel950Pro/drive_c/Program Files (x86)/RT-950PRO_CPS/BT-RT950PRO_CPS.exe"}
if [ ! -f "$CPS_SRC" ]; then
    CPS_SRC=$REPO/firmware/RE/cps/extracted/BT-RT950PRO_CPS.exe
fi
if [ ! -f "$CPS_SRC" ]; then
    echo "Cannot find BT-RT950PRO_CPS.exe. Set RT950_CPS_EXE." >&2
    exit 1
fi
if [ ! -f "$REPO/RT-950PRO_CPS_NI.dat" ]; then
    echo "Missing $REPO/RT-950PRO_CPS_NI.dat" >&2
    exit 1
fi

echo "Building release rt950-cps"
(
    cd "$REPO/cps"
    CARGO_BUILD_JOBS=1 cargo build -p rt950-cps --release --jobs 1
)

rm -rf "$DEST"
mkdir -p "$DEST/firmware/scripts" "$DEST/cps" "$DEST/codeplugs"
cp "$REPO/cps/target/release/rt950-cps" "$DEST/rt950-cps"
cp "$SCRIPT_DIR/run.sh" "$DEST/run.sh"
cp "$SCRIPT_DIR/setup.sh" "$DEST/setup.sh"
cp "$SCRIPT_DIR/uninstall.sh" "$DEST/uninstall.sh"
cp "$SCRIPT_DIR/rt950-cps.svg" "$DEST/rt950-cps.svg"
chmod 755 "$DEST/run.sh" "$DEST/setup.sh" "$DEST/uninstall.sh" "$DEST/rt950-cps"
cp "$REPO/firmware/scripts/radtel_cps.py" \
   "$REPO/firmware/scripts/radtel_flash.py" \
   "$REPO/firmware/scripts/RadtelDat.exe" \
   "$DEST/firmware/scripts/"
cp "$CPS_SRC" "$DEST/cps/BT-RT950PRO_CPS.exe"
cp "$REPO/RT-950PRO_CPS_NI.dat" "$DEST/RT-950PRO_CPS_NI.dat"
cp "$REPO"/codeplugs/*.dat "$REPO"/codeplugs/*.950pro "$DEST/codeplugs/"

echo "Stick tree is $DEST"
echo "Copy that folder onto the USB stick, then on Ubuntu run ./run.sh from it."
