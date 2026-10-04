/**
 * @brief fun_0801abb4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801abb4, Ghidra name FUN_0801abb4, 88 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801abb4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_0801ac0c;
  uVar2 = (**(code **)(DAT_0801ac0c + 4))(0x52);
  uVar2 = uVar2 & 0x1fff;
  if (param_1 == 0) {
    (**(code **)(iVar1 + 8))(0x51,0);
  }
  else if ((*(byte *)(iVar1 + 0x20) < 2) && (*(char *)(iVar1 + 0x25) == '\0')) {
    (**(code **)(iVar1 + 8))(0x51,*(byte *)(DAT_0801ac10 + 1) & 0x7f | 0x9000);
    (**(code **)(iVar1 + 8))(7,0x471);
  }
  else {
    uVar2 = uVar2 | 0x8000;
  }
                    /* WARNING: Could not recover jumptable at 0x0801ac0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 8))(0x52,uVar2);
  return;
}

