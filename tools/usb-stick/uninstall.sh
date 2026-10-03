#!/bin/sh
# Remove the RT-950 CPS copy this setup installed for the current user.
# Does not remove apt packages or the dialout group.
set -eu

if [ "$(id -u)" -eq 0 ]; then
    echo "Run this as your normal user, not as root." >&2
    exit 1
fi

APP=$HOME/Applications/rt950pro
LINK=$HOME/bin/rt950pro
DATA=${XDG_DATA_HOME:-$HOME/.local/share}

cat <<EOF
This removes the RT-950 CPS installed for $USER.

It deletes:
  $APP
  $LINK
  $DATA/applications/rt950-cps.desktop
  $HOME/Applications/RT-950 CPS.desktop
  the .950pro MIME type and the icons registered for this user

Ubuntu packages and the dialout group stay as they are.
Nothing is written to the radio. Answering no leaves the install in place.

EOF

printf 'Remove the RT-950 CPS? [y/N] '
read -r answer
case "$answer" in
    y|Y|yes|YES) ;;
    *)
        echo "Cancelled."
        exit 0
        ;;
esac

if [ -L "$LINK" ]; then
    target=$(readlink -f "$LINK" 2>/dev/null || true)
    case "$target" in
        "$APP"/*) rm -f "$LINK" ;;
        *) echo "Left $LINK in place. It does not point at $APP." ;;
    esac
fi
rm -f "$DATA/applications/rt950-cps.desktop"
rm -f "$HOME/Applications/RT-950 CPS.desktop"
rm -f "$DATA/mime/packages/rt950-codeplug.xml"
rm -f "$DATA/icons/hicolor/scalable/apps/rt950-cps.svg"
rm -f "$DATA/icons/hicolor/scalable/mimetypes/application-x-rt950-codeplug.svg"
rm -rf "$APP"

if command -v update-mime-database >/dev/null 2>&1; then
    update-mime-database "$DATA/mime" >/dev/null 2>&1 || true
fi
if command -v update-desktop-database >/dev/null 2>&1; then
    update-desktop-database "$DATA/applications" >/dev/null 2>&1 || true
fi
if command -v gtk-update-icon-cache >/dev/null 2>&1; then
    gtk-update-icon-cache -f -t "$DATA/icons/hicolor" >/dev/null 2>&1 || true
fi

echo "Removed the RT-950 CPS for this user."
