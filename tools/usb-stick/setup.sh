#!/bin/sh
# Ask before installing the Ubuntu packages and dialout membership the CPS needs.
# Run this in a terminal as your normal user. It calls sudo itself.
set -eu

if [ "$(id -u)" -eq 0 ]; then
    echo "Run this as your normal user, not as root. It will ask for your password." >&2
    exit 1
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

echo
echo "Done. Log out and back in so the dialout group applies, then run ./run.sh."
