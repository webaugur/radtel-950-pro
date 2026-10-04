/**
 * @brief fun_08009460
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08009460, Ghidra name FUN_08009460, 38 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08009460(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_08009488;
  if (param_1 / 10000 - 0xb4 < 0x1cc) {
    *(undefined1 *)(DAT_08009488 + 0x10a) = 4;
    *(undefined1 *)(iVar1 + 0x10d) = 1;
    return 1;
  }
  return 0;
}

