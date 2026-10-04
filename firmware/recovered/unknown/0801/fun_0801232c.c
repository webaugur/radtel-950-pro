/**
 * @brief fun_0801232c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801232c, Ghidra name FUN_0801232c, 32 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801232c(void)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(DAT_08012350 + 2);
  if (*(byte *)((int)DAT_0801234c + 0x43) == 1) {
    DAT_0801234c[0x11] = uVar1;
    return;
  }
  if (1 < *(byte *)((int)DAT_0801234c + 0x43)) {
    *(undefined2 *)((int)DAT_0801234c + 0x45) = uVar1;
    return;
  }
  *DAT_0801234c = uVar1;
  return;
}

