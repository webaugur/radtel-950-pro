/**
 * @brief fun_08019960
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08019960, Ghidra name FUN_08019960, 60 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08019960(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_0801999c;
  iVar2 = FUN_08012ace(DAT_0801999c,0x8000);
  if (iVar2 == 0) {
    FUN_08025f44(0x32);
    iVar2 = FUN_08012ace(uVar1,0x8000);
    if (iVar2 == 0) {
      FUN_08012ae6(DAT_080199a0,2);
      FUN_08012ae6(DAT_080199a4,0x100);
      return;
    }
  }
  return;
}

