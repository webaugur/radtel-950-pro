#!/usr/bin/env bash
for pid in $(ps -eo pid=,cmd= | awk '/\/sys\/kernel\/debug\/usb\/usbmon\/2u/ && $0 !~ /awk/ {print $1}'); do
  sudo -n kill "$pid" 2>/dev/null || true
done
echo "usbmon stopped"
ls -lh "/home/user/Documents/DragonSDR/webaugur/radtel-950-pro/re/cps/captures/usbmon-write-20261003-075558.log" 2>/dev/null
