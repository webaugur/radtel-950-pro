/**
 * @brief fun_080220a0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080220a0, Ghidra name FUN_080220a0, 66 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080220a0(undefined4 param_1)

{
  FUN_08018340();
  if (*DAT_080220e4 != '\0') {
    if (*(char *)(DAT_080220e8 + 1) == '\0') {
      FUN_08020144(param_1);
    }
    else if (*(char *)(DAT_080220e8 + 1) == '\x02') {
      FUN_080200b0(param_1);
    }
    else {
      FUN_080200f8(param_1);
    }
    FUN_0800c35c(0);
    return 0;
  }
  FUN_08008160(param_1);
  return 1;
}

