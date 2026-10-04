/**
 * @brief fun_0800a582
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800a582, Ghidra name FUN_0800a582, 32 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800a582(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  
  *(short *)param_1 = (short)param_1;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = unaff_r5;
  param_1[3] = unaff_r6;
  iVar1 = _DAT_08009db8;
  if (*(int *)(_DAT_08009db8 + 0x18) != 0) {
    iVar2 = *(int *)(_DAT_08009db8 + 0x18) + -1;
    *(int *)(_DAT_08009db8 + 0x18) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
  }
  return;
}

