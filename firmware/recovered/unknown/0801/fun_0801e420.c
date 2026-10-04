/**
 * @brief fun_0801e420
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801e420, Ghidra name FUN_0801e420, 74 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801e420(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_0801e470;
  uVar1 = PTR_DAT_0801e46c[3];
  PTR_DAT_0801e470[(uint)(byte)PTR_DAT_0801e470[0xfa] * 0x58 + 0x141] = uVar1;
  if (puVar2[(uint)(byte)puVar2[0xfa] * 0x58 + 0x130] == '\0') {
    PTR_DAT_0801e474[0xb] = uVar1;
  }
  else {
    puVar2[(uint)(byte)puVar2[0xfa] * 0x20 + 0x27d] = uVar1;
  }
  FUN_08018038();
  return 1;
}

