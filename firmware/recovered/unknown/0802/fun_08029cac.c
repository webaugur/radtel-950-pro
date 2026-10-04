/**
 * @brief fun_08029cac
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08029cac, Ghidra name thunk_FUN_080026f8, 4 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_080026f8(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,int param_5,
                      uint param_6,int param_7,uint param_8)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte abStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  int *piStack_28;
  
  iVar6 = param_7 + -1;
  uVar1 = (param_6 & 0x400) << 0x15;
  uVar8 = uVar1 | 0x7f800000;
  uVar7 = uVar1 | _BYTE_ARRAY_0800281c;
  uStack_38 = 0;
  uStack_34 = param_1;
  uStack_30 = param_2;
  piStack_2c = param_3;
  piStack_28 = param_4;
  if ((param_8 & 0xffffffdf) == 0x49) {
    iVar5 = 1;
    abStack_48._0_4_ = s_INFINITY_08002820._0_4_;
    abStack_48._4_4_ = s_INFINITY_08002820._4_4_;
    uStack_40 = ram0x08002828;
    while( true ) {
      iVar4 = param_5;
      param_5 = iVar4 + 1;
      uVar1 = (*(code *)param_4[6])(uStack_30);
      iVar6 = iVar6 + -1;
      if (((iVar6 < 0) || (abStack_48[iVar5] == 0)) ||
         ((uVar1 & 0xffffffdf) != (uint)abStack_48[iVar5])) break;
      iVar5 = iVar5 + 1;
      if ((iVar5 == 3) || (iVar5 == 8)) {
        *param_3 = iVar4 + 2;
      }
    }
    (*(code *)param_4[7])(uStack_30);
    if ((iVar5 != 3) && (iVar5 != 8)) {
      return -2;
    }
  }
  else if ((param_8 & 0xffffffdf) == 0x4e) {
    uVar8 = (*(code *)param_4[6])(param_2);
    if ((((param_7 + -2 < 0) || ((uVar8 & 0xffffffdf) != 0x41)) ||
        (uVar8 = (*(code *)param_4[6])(uStack_30), param_7 + -3 < 0)) ||
       ((uVar8 & 0xffffffdf) != 0x4e)) {
LAB_080027e2:
      (*(code *)param_4[7])(uStack_30);
      return -2;
    }
    param_5 = param_5 + 3;
    iVar6 = (*(code *)param_4[6])(uStack_30);
    param_7 = param_7 + -4;
    uVar7 = uVar7 | 0x80000;
    uVar8 = uVar1 | 0x7fc00000;
    *param_3 = param_5;
    if ((param_7 < 0) || (iVar6 != 0x28)) {
      (*(code *)param_4[7])(uStack_30);
    }
    else {
      do {
        iVar5 = param_5;
        iVar6 = (*(code *)param_4[6])(uStack_30);
        param_7 = param_7 + -1;
        if ((param_7 < 0) || (iVar6 < 0)) goto LAB_080027e2;
        param_5 = iVar5 + 1;
      } while (iVar6 != 0x29);
      param_5 = iVar5 + 2;
      *param_3 = param_5;
    }
  }
  if ((param_6 & 1) == 0) {
    if ((param_6 & 0x24) == 0) {
      puVar3 = (undefined4 *)*param_4;
      *param_4 = (int)(puVar3 + 1);
      *(uint *)*puVar3 = uVar8;
    }
    else {
      piVar2 = (int *)*param_4;
      *param_4 = (int)(piVar2 + 1);
      puVar3 = (undefined4 *)*piVar2;
      *puVar3 = uStack_38;
      puVar3[1] = uVar7;
    }
  }
  return param_5;
}

