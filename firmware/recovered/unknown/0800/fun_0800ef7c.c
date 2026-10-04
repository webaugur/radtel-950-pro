/**
 * @brief fun_0800ef7c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ef7c, Ghidra name FUN_0800ef7c, 30 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ef7c(undefined2 param_1)

{
  if (*(byte *)((int)DAT_0800ef9c + 0x43) == 1) {
    DAT_0800ef9c[0x11] = param_1;
    return;
  }
  if (1 < *(byte *)((int)DAT_0800ef9c + 0x43)) {
    *(undefined2 *)((int)DAT_0800ef9c + 0x45) = param_1;
    return;
  }
  *DAT_0800ef9c = param_1;
  return;
}

