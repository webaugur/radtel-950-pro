/**
 * @brief fun_08013cc8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08013cc8, Ghidra name FUN_08013cc8, 100 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08013cc8(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_08013d2c;
  if (param_1 < 0x280) {
    *(undefined1 *)(DAT_08013d2c + 0x10b) = 4;
    *(undefined1 *)(iVar1 + 0x10c) = 1;
    return;
  }
  if (param_1 - 0x280 < 0x550) {
    *(undefined1 *)(DAT_08013d2c + 0x10b) = 0;
    *(undefined1 *)(iVar1 + 0x10c) = 0;
    return;
  }
  if (param_1 - 2000 < 1000) {
    *(undefined1 *)(DAT_08013d2c + 0x10b) = 2;
    *(undefined1 *)(iVar1 + 0x10c) = 0;
    return;
  }
  if (param_1 - 3000 < 1000) {
    *(undefined1 *)(DAT_08013d2c + 0x10b) = 3;
    *(undefined1 *)(iVar1 + 0x10c) = 1;
    return;
  }
  *(undefined1 *)(DAT_08013d2c + 0x10b) = 1;
  *(undefined1 *)(iVar1 + 0x10c) = 1;
  return;
}

