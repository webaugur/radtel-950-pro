#!/bin/sh
# Ask before installing the Ubuntu packages and dialout membership the CPS needs.
# Run this in a terminal as your normal user. It calls sudo itself.
set -eu

if [ "$(id -u)" -eq 0 ]; then
    echo "Run this as your normal user, not as root. It will ask for your password." >&2
    exit 1
fi

# Launcher and MIME registration do not need root. SETUP_LAUNCHER_ONLY=1
# skips the package install so a machine that already has them can refresh
# the desktop entry.
install_launcher() {
    ROOT=$(CDPATH= cd -- "$(dirname "$0")" && pwd)
    if [ -x "$ROOT/rt950-cps" ]; then
        SRC=$ROOT
    else
        REPO=$(CDPATH= cd -- "$ROOT/../.." && pwd)
        SRC=$REPO/dist/rt950-usb
    fi
    if [ ! -x "$SRC/rt950-cps" ]; then
        echo "Missing $SRC/rt950-cps. Run tools/usb-stick/stage.sh first." >&2
        exit 1
    fi
    APP=$HOME/Applications/rt950pro
    mkdir -p "$HOME/Applications" "$HOME/bin"
    if [ "$(readlink -f "$SRC")" != "$(readlink -f "$APP" 2>/dev/null || echo "$APP")" ]; then
        rm -rf "$APP"
        cp -a "$SRC" "$APP"
    fi
    for name in run.sh setup.sh uninstall.sh rt950-cps.svg; do
        if [ -f "$ROOT/$name" ]; then
            cp "$ROOT/$name" "$APP/$name"
        fi
    done
    chmod 755 "$APP/run.sh" "$APP/setup.sh" "$APP/rt950-cps"
    if [ -f "$APP/uninstall.sh" ]; then
        chmod 755 "$APP/uninstall.sh"
    fi
    ln -sfn "$APP/run.sh" "$HOME/bin/rt950pro"
    BIN=$APP/rt950-cps
    ICON=$APP/rt950-cps.svg
    if [ ! -f "$ICON" ]; then
        echo "Missing icon: $ICON" >&2
        exit 1
    fi
    APP_DIR=${XDG_DATA_HOME:-$HOME/.local/share}/applications
    MIME_DIR=${XDG_DATA_HOME:-$HOME/.local/share}/mime/packages
    ICON_DIR=${XDG_DATA_HOME:-$HOME/.local/share}/icons/hicolor/scalable
    mkdir -p "$APP_DIR" "$MIME_DIR" "$ICON_DIR/apps" "$ICON_DIR/mimetypes" "$HOME/Applications"
    cp "$ICON" "$ICON_DIR/apps/rt950-cps.svg"
    cp "$ICON" "$ICON_DIR/mimetypes/application-x-rt950-codeplug.svg"
    cat > "$MIME_DIR/rt950-codeplug.xml" <<EOF
<?xml version="1.0" encoding="UTF-8"?>
<mime-info xmlns="http://www.freedesktop.org/standards/shared-mime-info">
  <mime-type type="application/x-rt950-codeplug">
    <comment>RT-950 Pro codeplug</comment>
    <sub-class-of type="application/json"/>
    <glob pattern="*.950pro"/>
    <glob pattern="*.950PRO"/>
    <icon name="rt950-cps"/>
  </mime-type>
</mime-info>
EOF
    DESKTOP=$APP_DIR/rt950-cps.desktop
    cat > "$DESKTOP" <<EOF
[Desktop Entry]
Version=1.0
Type=Application
Name=RT-950 CPS
GenericName=Radio Programming
Comment=Edit an RT-950 Pro codeplug
Exec=$BIN %f
TryExec=$BIN
Path=$(dirname "$BIN")
Icon=$ICON
Terminal=false
Categories=HamRadio;Utility;Science;
Keywords=RT-950;Radtel;codeplug;ham;radio;APRS;950pro;
MimeType=application/x-rt950-codeplug;
StartupNotify=true
StartupWMClass=RT-950 CPS
DBusActivatable=false
EOF
    chmod 644 "$DESKTOP"
    cp "$DESKTOP" "$HOME/Applications/RT-950 CPS.desktop"
    if command -v update-mime-database >/dev/null 2>&1; then
        update-mime-database "${XDG_DATA_HOME:-$HOME/.local/share}/mime"
    fi
    if command -v update-desktop-database >/dev/null 2>&1; then
        update-desktop-database "$APP_DIR"
    fi
    if command -v xdg-mime >/dev/null 2>&1; then
        xdg-mime default rt950-cps.desktop application/x-rt950-codeplug
    fi
    if command -v gtk-update-icon-cache >/dev/null 2>&1; then
        gtk-update-icon-cache -f -t "${XDG_DATA_HOME:-$HOME/.local/share}/icons/hicolor" >/dev/null 2>&1 || true
    fi
    if [ -x "$HOME/Documents/IndianaDell/scripts/gnome/fix-nautilus-desktop-launch.sh" ]; then
        "$HOME/Documents/IndianaDell/scripts/gnome/fix-nautilus-desktop-launch.sh"
    fi
    if [ -x "$HOME/Documents/IndianaDell/scripts/gnome/sync-desktop-icons.sh" ]; then
        "$HOME/Documents/IndianaDell/scripts/gnome/sync-desktop-icons.sh" --no-rename --file "$DESKTOP"
        "$HOME/Documents/IndianaDell/scripts/gnome/sync-desktop-icons.sh" --no-rename --file "$HOME/Applications/RT-950 CPS.desktop"
    fi
    echo "Installed: $APP"
    echo "Command: $HOME/bin/rt950pro"
    echo "Menu: $APP_DIR/rt950-cps.desktop"
    echo "Launcher: $HOME/Applications/RT-950 CPS.desktop"
    echo "Opens .950pro files with $BIN"
    echo "Remove this install with: sh $APP/uninstall.sh"
}

if [ "${SETUP_LAUNCHER_ONLY:-}" = 1 ]; then
    install_launcher
    exit 0
fi

cat <<EOF
This prepares this Ubuntu machine to run the RT-950 CPS.

It will ask for your password, then do two things:

1. Install these packages if they are missing:
     python3  python3-serial  mono-runtime  mono-libraries
   Python talks to the radio. Mono opens the codeplug files.
   Apt may download them from Ubuntu's archives, and apt will
   show the package list and ask you to confirm.

2. Add the user $USER to the dialout group.
   That lets this account open /dev/ttyUSB0, the radio programming cable.
   The new group is used after you log out and back in.

It then registers this copy of the CPS, without sudo:

3. Copy this program to ~/Applications/rt950pro.
   Link ~/bin/rt950pro to its run.sh.
   Install the menu entry and the .950pro file type for this user.
   Double-clicking a .950pro file opens that copy.

Nothing is written to the radio. Answering no leaves the machine as it is.

EOF

printf 'Proceed? [y/N] '
read -r answer
case "$answer" in
    y|Y|yes|YES) ;;
    *)
        echo "Cancelled."
        exit 0
        ;;
esac

sudo apt install python3 python3-serial mono-runtime mono-libraries
sudo usermod -aG dialout "$USER"
install_launcher

echo
echo "Done. Log out and back in so the dialout group applies."
echo "A .950pro file now opens in this CPS. The launcher is RT-950 CPS."
