/**
 * @brief fun_0801e0ec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801e0ec, Ghidra name FUN_0801e0ec, 52 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801e0ec(void)

{
  undefined1 uVar1;
  
  uVar1 = PTR_DAT_0801e120[3];
  PTR_DAT_0801e124[0x16] = uVar1;
  if (PTR_DAT_0801e128[0x21] == '\x01') {
    PTR_DAT_0801e128[(uint)(byte)PTR_DAT_0801e128[0x95] * 5 + 0x4c] = uVar1;
  }
  else {
    PTR_DAT_0801e128[0x47] = uVar1;
  }
  FUN_0800eec0();
  FUN_08018038();
  return 1;
}

