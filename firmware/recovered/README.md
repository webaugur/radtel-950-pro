# Recovered V0.29 decompile

These files are the Ghidra export from `re/firmware/RE/v0.29/decompile/`, split by address and given a Doxygen banner. They are not compiled.

`crc/` and `cpu/` are the three routines identified from this image. `unknown/` is everything else, grouped by the top 16 bits of the address. Names there stay `fun_` plus the address.

Regenerate with `python3 firmware/tools/split_decompile.py` from the repository root after a new export.
