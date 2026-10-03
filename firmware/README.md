decrypted.bin is the firmware decrypted from the btf file from the 0.18 firmware update.  the fwcrypt_io.py under scripts was used to decrypt it.   

RE/decrypted-firmware is the ghidra project I've been working on.
RE/firmware dumps is a USB capture of the firmware update process -- part 1 is the update, part 2 is the complete flash.

## Codeplug shell (CPS serial, not EnUPDATE)

`scripts/radtel_cps.py` — stdin command shell for the codeplug protocol
(handshake, `F`/`M`/`SEND`, `R` reads, 100-byte write stream). Stdout is
results; stderr is errors. See `docs/captures/PROTOCOL_FROM_CAPTURE.md`.

```bash
python3 firmware/scripts/radtel_cps.py <<'EOF'
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
python3 firmware/scripts/radtel_cps.py <<'EOF'
port /dev/ttyUSB0
dat-info /path/to/RT-950PRO_CPS_NI.dat
write-dat /path/to/RT-950PRO_CPS_NI.dat confirm
read-dat /tmp/from-radio.dat
quit
EOF
```

Rebuild the helper if needed:

```bash
mcs -sdk:4.5 -out:firmware/scripts/RadtelDat.exe firmware/scripts/RadtelDat.cs
```

