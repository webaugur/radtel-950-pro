/**
 * @brief fun_08012d60
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012d60, Ghidra name FUN_08012d60, 58 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08012d60(int param_1)

{
  if (param_1 == 0) {
    if (*(char *)(_DAT_08012da8 + 8) == '\x01') {
      FUN_08000850(DAT_08012da4,&DAT_08012da0,&DAT_08012db4);
    }
    else {
      FUN_08000850(DAT_08012da4,&DAT_08012da0,s_Bright_08012dab + 1);
    }
  }
  else {
    FUN_08000850(DAT_08012da4,&DAT_08012da0,*(undefined4 *)(DAT_08012d9c + (param_1 + -1) * 4));
  }
  return DAT_08012da4;
}

