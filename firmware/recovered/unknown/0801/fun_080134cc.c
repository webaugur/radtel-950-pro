/**
 * @brief fun_080134cc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080134cc, Ghidra name FUN_080134cc, 114 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080134cc(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_08013540;
  if (param_1 < 0x280) {
    if (*(char *)(DAT_08013544 + 0x62) != '\0') {
      *(undefined1 *)(DAT_08013540 + 0x10a) = 0;
      *(undefined1 *)(iVar1 + 0x10d) = 0;
      return;
    }
    *(undefined1 *)(DAT_08013540 + 0x10a) = 4;
    *(undefined1 *)(iVar1 + 0x10d) = 1;
    return;
  }
  if (param_1 < 2000) {
    *(undefined1 *)(DAT_08013540 + 0x10a) = 0;
    *(undefined1 *)(iVar1 + 0x10d) = 0;
    return;
  }
  if (param_1 - 2000 < 1000) {
    *(undefined1 *)(DAT_08013540 + 0x10a) = 2;
    *(undefined1 *)(iVar1 + 0x10d) = 0;
    return;
  }
  if (param_1 - 3000 < 1000) {
    *(undefined1 *)(DAT_08013540 + 0x10a) = 3;
    *(undefined1 *)(iVar1 + 0x10d) = 1;
    return;
  }
  *(undefined1 *)(DAT_08013540 + 0x10a) = 1;
  *(undefined1 *)(iVar1 + 0x10d) = 1;
  return;
}

