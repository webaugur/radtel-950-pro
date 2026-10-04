/**
 * @brief fun_080268f0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080268f0, Ghidra name FUN_080268f0, 118 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_080268f0(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = CONCAT44(param_2,param_1);
  *param_3 = 0;
  uVar1 = param_2 & 0x7fffffff;
  if (((int)uVar1 < ram0x08026968) && (param_1 != 0 || uVar1 != 0)) {
    if (uVar1 < 0x100000) {
      uVar3 = FUN_08028a98(param_1,param_2,(int)ram0x08026970,
                           (int)((ulonglong)ram0x08026970 >> 0x20));
      iVar2 = -0x36;
      uVar1 = (uint)(uVar3 >> 0x20) & 0x7fffffff;
      *param_3 = -0x36;
    }
    else {
      iVar2 = *param_3;
    }
    *param_3 = DAT_08026978 + ((int)uVar1 >> 0x14) + iVar2;
    uVar3 = uVar3 & 0x800fffffffffffff | 0x3fe0000000000000;
  }
  else {
    uVar3 = CONCAT44(param_2,param_1);
  }
  return uVar3;
}

