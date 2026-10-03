#!/bin/sh
# Analyze RT-950 Pro clear firmware with radare2 (Ubuntu packages r2/iaito;
# rizin is not in Ubuntu 26.04 apt — use r2 which is the same family).
#
# Usage:
#   ./analyze_v0.29.sh              # batch analysis + exports
#   ./analyze_v0.29.sh open         # open interactive r2
#   ./analyze_v0.29.sh iaito        # open GUI (iaito)
set -eu

HERE=$(CDPATH= cd -- "$(dirname "$0")" && pwd)
REPO=$(CDPATH= cd -- "$HERE/../../../.." && pwd)
BIN="${FIRMWARE_BIN:-$REPO/re/firmware/decrypted_v0.29.bin}"
EXPORTS="$HERE/exports"
BASE=0x08000000
PROJECT="$HERE/decrypted_v0.29.r2"

if [ ! -f "$BIN" ]; then
  echo "error: missing $BIN — decrypt V0.29 BTF first" >&2
  exit 1
fi

mkdir -p "$EXPORTS"

MODE="${1:-batch}"

case "$MODE" in
  open|r2)
    exec r2 -a arm -b 16 -m "$BASE" \
      -e anal.armthumb=true \
      -e bin.cache=true \
      "$BIN"
    ;;
  iaito)
    if ! command -v iaito >/dev/null 2>&1; then
      echo "error: iaito not installed (apt install iaito)" >&2
      exit 1
    fi
    # iaito accepts file; set arch in UI if needed
    exec iaito "$BIN"
    ;;
  batch|*)
    echo "Analyzing $BIN @ $BASE ..."
    r2 -q -a arm -b 16 -m "$BASE" \
      -e anal.armthumb=true \
      -e bin.cache=true \
      -e scr.color=0 \
      -c "aaa" \
      -c "afl > $EXPORTS/functions_v0.29.txt" \
      -c "izq > $EXPORTS/r2_iz_strings_v0.29.txt" \
      -c "s $BASE; px 64 > $EXPORTS/vector_table_v0.29.txt" \
      -c "s 0x080032a0; pd 30 > $EXPORTS/reset_region_v0.29.txt" \
      "$BIN"
    # Python string export (more reliable for raw bins)
    python3 "$HERE/export_strings.py" "$BIN" "$EXPORTS/strings_v0.29.csv" "$BASE"
    echo "Exports in $EXPORTS"
    wc -l "$EXPORTS"/functions_v0.29.txt "$EXPORTS"/strings_v0.29.csv 2>/dev/null || true
    ;;
esac
