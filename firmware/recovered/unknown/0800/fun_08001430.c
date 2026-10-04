/**
 * @brief fun_08001430
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08001430, Ghidra name FUN_08001430, 620 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08001430(uint *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r7;
  char *pcVar7;
  char *pcVar8;
  int unaff_r10;
  uint unaff_r11;
  undefined1 local_64 [32];
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int iStack_30;
  char local_27 [3];
  
  puVar4 = (undefined4 *)(param_3 + 7U & 0xfffffff8);
  local_40 = *puVar4;
  local_3c = puVar4[1];
  iVar2 = FUN_08023abc();
  if (local_3c < 0) {
    local_44 = 0x2d;
  }
  else if ((int)(*param_1 << 0x1e) < 0) {
    local_44 = 0x2b;
  }
  else {
    local_44 = (*param_1 & 4) << 3;
  }
  if ((iVar2 == 3) || (6 < iVar2)) {
    FUN_08001d9c(param_1,param_2,iVar2,local_44);
    return 3;
  }
  if ((int)((uint)(byte)*param_1 << 0x1a) < 0) {
    uVar3 = param_1[7];
  }
  else {
    uVar3 = 6;
  }
  if (param_2 == 0x65) {
    if ((int)uVar3 < 0x11) {
      iVar2 = uVar3 + 1;
    }
    else {
      iVar2 = 0x11;
    }
    FUN_08001284(&local_38,local_64,&local_40,iVar2,0);
    unaff_r5 = uVar3 + 1;
    unaff_r7 = local_38;
  }
  else {
    if (param_2 == 0x66) {
      unaff_r7 = -0x80000000;
      FUN_08001284(&local_38,local_64,&local_40,uVar3,1);
      unaff_r6 = 0;
      unaff_r5 = local_34;
      if (iStack_30 == 0) {
        unaff_r5 = local_38 + uVar3 + 1;
      }
      if (-1 < (int)(uVar3 - unaff_r5)) {
        unaff_r6 = -1 - (uVar3 - unaff_r5);
        unaff_r5 = uVar3 + 1;
      }
      unaff_r10 = unaff_r5 - uVar3;
      unaff_r11 = local_34;
      goto LAB_08001580;
    }
    if (param_2 != 0x67) goto LAB_08001580;
    if ((int)uVar3 < 1) {
      uVar3 = 1;
    }
    uVar6 = uVar3;
    if (0x11 < (int)uVar3) {
      uVar6 = 0x11;
    }
    FUN_08001284(&local_38,local_64,&local_40,uVar6,0);
    unaff_r6 = 0;
    unaff_r5 = uVar3;
    if (-1 < (int)((uint)(byte)*param_1 << 0x1c)) {
      if ((int)local_34 < (int)uVar3) {
        unaff_r5 = local_34;
      }
      for (; (1 < (int)unaff_r5 && (local_64[unaff_r5 - 1] == '0')); unaff_r5 = unaff_r5 - 1) {
      }
    }
    unaff_r7 = local_38;
    if ((local_38 < (int)uVar3) && (-5 < local_38)) {
      if (local_38 < 1) {
        unaff_r5 = unaff_r5 - local_38;
        unaff_r6 = local_38;
      }
      else if ((int)unaff_r5 < local_38 + 1) {
        unaff_r5 = local_38 + 1;
      }
      unaff_r10 = (local_38 - unaff_r6) + 1;
      unaff_r7 = -0x80000000;
      unaff_r11 = local_34;
      goto LAB_08001580;
    }
  }
  unaff_r6 = 0;
  unaff_r10 = 1;
  unaff_r11 = local_34;
LAB_08001580:
  if ((-1 < (int)((uint)(byte)*param_1 << 0x1c)) && ((int)unaff_r5 <= unaff_r10)) {
    unaff_r10 = -1;
  }
  pcVar8 = local_27 + 2;
  local_27[2] = 0;
  if (unaff_r7 != -0x80000000) {
    iVar2 = 2;
    cVar5 = '+';
    pcVar7 = pcVar8;
    if (unaff_r7 < 0) {
      unaff_r7 = -unaff_r7;
      cVar5 = '-';
    }
    for (; (0 < iVar2 || (unaff_r7 != 0)); unaff_r7 = unaff_r7 / 10) {
      pcVar7[-1] = (char)unaff_r7 + (char)(unaff_r7 / 10) * -10 + '0';
      iVar2 = iVar2 + -1;
      pcVar7 = pcVar7 + -1;
    }
    pcVar7[-1] = cVar5;
    if ((int)((uint)(ushort)*param_1 << 0x14) < 0) {
      cVar5 = 'E';
    }
    else {
      cVar5 = 'e';
    }
    pcVar8 = pcVar7 + -2;
    pcVar7[-2] = cVar5;
  }
  pcVar7 = local_27 + (2 - (int)pcVar8);
  param_1[6] = (param_1[6] - (int)(pcVar7 + (local_44 != 0) + unaff_r5 + (unaff_r10 >> 0x1f))) - 1;
  if (-1 < (int)((uint)(byte)*param_1 << 0x1b)) {
    FUN_0800087c(param_1);
  }
  if (local_44 != 0) {
    (*(code *)param_1[1])(local_44,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)((uint)(byte)*param_1 << 0x1b) < 0) {
    FUN_0800087c(param_1);
  }
  while (uVar3 = unaff_r5 - 1, 0 < (int)unaff_r5) {
    if ((unaff_r6 < 0) || ((int)unaff_r11 <= unaff_r6)) {
      uVar1 = 0x30;
    }
    else {
      uVar1 = local_64[unaff_r6];
    }
    (*(code *)param_1[1])(uVar1,param_1[2]);
    param_1[8] = param_1[8] + 1;
    unaff_r6 = unaff_r6 + 1;
    unaff_r10 = unaff_r10 + -1;
    unaff_r5 = uVar3;
    if (unaff_r10 == 0) {
      iVar2 = FUN_080010bc();
      (*(code *)param_1[1])
                (*(undefined1 *)((int)*(int **)(iVar2 + 0xc) + **(int **)(iVar2 + 0xc)),param_1[2]);
      param_1[8] = param_1[8] + 1;
    }
  }
  while (0 < (int)pcVar7) {
    (*(code *)param_1[1])(*pcVar8,param_1[2]);
    param_1[8] = param_1[8] + 1;
    pcVar7 = pcVar7 + -1;
    pcVar8 = pcVar8 + 1;
  }
  FUN_080008a8(param_1);
  return 3;
}

