/**
 * @brief fun_080062c4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080062c4, Ghidra name FUN_080062c4, 502 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_080062c4(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar4 = DAT_080064c4;
  pcVar3 = DAT_080064c0;
  iVar7 = DAT_080064bc;
  pcVar9 = (char *)(param_1 + 0x66);
  bVar2 = *(byte *)(param_1 + 0x65);
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  if (bVar2 == 0x3d) {
LAB_0800633e:
    if (*pcVar9 == '/') {
      *param_2 = 0x70;
      uVar6 = FUN_0800a374(param_1 + 0x67,param_2);
    }
    else {
      *param_2 = 0x50;
      if (((*(char *)(iVar7 + 1) == '\x01') && (*pcVar3 == '\x01')) && (pcVar3[0x22] == '\x01')) {
        *(undefined4 *)(iVar4 + 0x66) = *(undefined4 *)(pcVar3 + 0x1b);
        *(undefined2 *)(iVar4 + 0x6a) = *(undefined2 *)(pcVar3 + 0x1f);
      }
      uVar6 = FUN_08019810(pcVar9,param_2);
    }
  }
  else {
    if (bVar2 < 0x3e) {
      if (bVar2 == 0x21) goto LAB_0800633e;
      if (bVar2 != 0x2f) goto LAB_080062fc;
    }
    else if (bVar2 != 0x40) {
      if (bVar2 == 0x60) {
        *param_2 = 0x45;
        iVar5 = FUN_080260e0(param_1,param_2);
        if (iVar5 == 0) {
          uVar6 = 0;
        }
        else {
          if (((*(char *)(iVar7 + 1) == '\x01') && (*pcVar3 == '\x01')) && (pcVar3[0x22] == '\x01'))
          {
            *(undefined4 *)(iVar4 + 0x66) = *(undefined4 *)(pcVar3 + 0x1b);
            *(undefined2 *)(iVar4 + 0x6a) = *(undefined2 *)(pcVar3 + 0x1f);
          }
          uVar6 = 1;
        }
        goto LAB_080062fe;
      }
LAB_080062fc:
      uVar6 = 0;
      goto LAB_080062fe;
    }
    cVar1 = *(char *)(param_1 + 0x6c);
    if (((cVar1 == '/') || (cVar1 == 'z')) || (cVar1 == 'h')) {
      if (((*(char *)(DAT_080064bc + 1) == '\x01') && (*DAT_080064c0 == '\x01')) &&
         (DAT_080064c0[0x22] == '\x01')) {
        *(undefined4 *)(DAT_080064c4 + 0x66) = *(undefined4 *)(DAT_080064c0 + 0x1b);
        *(undefined2 *)(iVar4 + 0x6a) = *(undefined2 *)(pcVar3 + 0x1f);
      }
      local_30._2_2_ = (undefined2)((uint)param_2 >> 0x10);
      if (*(char *)(param_1 + 0x6c) == 'z') {
        local_30._0_2_ = *(undefined2 *)pcVar9;
        iVar7 = FUN_08021adc(&local_30,2);
        if (iVar7 - 1U < 0x1f) {
          *(char *)(iVar4 + 0x68) = (char)iVar7;
        }
        local_30._0_2_ = *(undefined2 *)(param_1 + 0x68);
        uVar8 = FUN_08021adc(&local_30,2);
        if (uVar8 < 0x18) {
          *(char *)(iVar4 + 0x69) = (char)uVar8;
        }
        local_30 = (undefined1 *)CONCAT22(local_30._2_2_,*(undefined2 *)(param_1 + 0x6a));
        uVar8 = FUN_08021adc(&local_30,2);
        if (uVar8 < 0x3c) {
          *(char *)(iVar4 + 0x6a) = (char)uVar8;
        }
      }
      else if (*(char *)(param_1 + 0x6c) == '/') {
        local_30._0_2_ = *(undefined2 *)pcVar9;
        iVar7 = FUN_08021adc(&local_30,2);
        if (iVar7 - 1U < 0x1f) {
          *(char *)(iVar4 + 0x68) = (char)iVar7;
        }
        local_30._0_2_ = *(undefined2 *)(param_1 + 0x68);
        uVar8 = FUN_08021adc(&local_30,2);
        if (uVar8 < 0x18) {
          *(char *)(iVar4 + 0x69) = (char)uVar8;
        }
        local_30 = (undefined1 *)CONCAT22(local_30._2_2_,*(undefined2 *)(param_1 + 0x6a));
        uVar8 = FUN_08021adc(&local_30,2);
        if (uVar8 < 0x3c) {
          *(char *)(iVar4 + 0x6a) = (char)uVar8;
        }
      }
      else {
        local_30._0_2_ = *(undefined2 *)pcVar9;
        iVar7 = FUN_08021adc(&local_30,2);
        if (iVar7 - 1U < 0x1f) {
          *(char *)(iVar4 + 0x68) = (char)iVar7;
        }
        local_30._0_2_ = *(undefined2 *)(param_1 + 0x68);
        uVar8 = FUN_08021adc(&local_30,2);
        if (uVar8 < 0x18) {
          *(char *)(iVar4 + 0x69) = (char)uVar8;
        }
        local_30 = (undefined1 *)CONCAT22(local_30._2_2_,*(undefined2 *)(param_1 + 0x6a));
        uVar8 = FUN_08021adc(&local_30,2);
        if (uVar8 < 0x3c) {
          *(char *)(iVar4 + 0x6a) = (char)uVar8;
        }
      }
      if (*(char *)(param_1 + 0x6d) == '/') {
        *param_2 = 0x70;
        uVar6 = FUN_0800a374(param_1 + 0x67,param_2);
      }
      else {
        *param_2 = 0x50;
        uVar6 = FUN_08019810(param_1 + 0x6d,param_2);
      }
    }
    else {
      uVar6 = 0;
    }
  }
LAB_080062fe:
  return CONCAT44(local_30,uVar6);
}

