/**
 * @brief fun_08015868
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015868, Ghidra name FUN_08015868, 60 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08015868(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_080158a8;
  if (param_1 == 0) {
    FUN_08012ae2(DAT_080158a4,0x2000);
    *(undefined1 *)(iVar1 + 2) = 0;
    return;
  }
  if (param_1 != 1) {
    if (*(char *)(DAT_080158a8 + 2) != '\0') {
      FUN_08012ae2(DAT_080158a4,0x2000);
      *(undefined1 *)(iVar1 + 2) = 0;
      return;
    }
    FUN_08012ae6();
    *(undefined1 *)(iVar1 + 2) = 1;
    return;
  }
  FUN_08012ae6();
  *(undefined1 *)(iVar1 + 2) = 1;
  return;
}

