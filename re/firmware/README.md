decrypted.bin is the firmware decrypted from the btf file from the 0.18 firmware update.  the fwcrypt_io.py under scripts was used to decrypt it.   

RE/decrypted-firmware is the ghidra project I've been working on.
RE/firmware dumps is a USB capture of the firmware update process -- part 1 is the update, part 2 is the complete flash.

## Codeplug shell (CPS serial, not EnUPDATE)

`re/cps/scripts/radtel_cps.py` — stdin command shell for the codeplug protocol
(handshake, `F`/`M`/`SEND`, `R` reads, 100-byte write stream, boot picture).
Stdout is results; stderr is errors. See `re/cps/captures/PROTOCOL_FROM_CAPTURE.md`.

`boot-picture <file.bmp> confirm` sends a 24-bit 240×320 BMP. The port must
already be open. It is not sent unless the line ends with `confirm`.

`callsign <file.dat>` prints `aprsData.tB_CallSign`. `callsign <file.dat> <sign>`
writes that field (at most 6 letters or digits) and does not touch the radio.
The OEM file default is `NOCALL`. The radio shows an unset callsign as `N0CALL`.

`flash <image.btf>` checks the image and opens the serial port, then stops.
`flash <image.btf> commit` runs the EnUPDATE flasher in `radtel_flash.py`
(`PROGRAMBT9000U`, `UPDATE`, then the `0xAA` packets). There is no firmware
read command. `radtel_flash.py` itself also refuses to write unless
`--commit` is passed.

```bash
python3 re/cps/scripts/radtel_cps.py <<'EOF'
port /dev/ttyUSB0
open
session
read 0
close
quit
EOF
```

`write-stream <file> confirm` programs the radio. Do not feed it the sparse
`read-image` file (54016 bytes); OEM writes a packed 27200-byte stream.

OEM `.dat` files (BinaryFormatter `KDH.RadioData`, e.g. `RT-950PRO_CPS_NI.dat`)
go through `RadtelDat.exe`, which calls the CPS assembly's own `DoIt()`:

```bash
python3 re/cps/scripts/radtel_cps.py <<'EOF'
port /dev/ttyUSB0
dat-info /path/to/RT-950PRO_CPS_NI.dat
write-dat /path/to/RT-950PRO_CPS_NI.dat confirm
read-dat /tmp/from-radio.dat
quit
EOF
```

Rebuild the helper if needed:

```bash
mcs -sdk:4.5 -out:re/cps/scripts/RadtelDat.exe re/cps/scripts/RadtelDat.cs
```

