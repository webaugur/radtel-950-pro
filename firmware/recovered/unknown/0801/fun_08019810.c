/**
 * @brief fun_08019810
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08019810, Ghidra name FUN_08019810, 316 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_08019810(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined3 *puVar7;
  undefined8 uVar8;
  int local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  
  local_28 = param_2;
  local_24 = param_3;
  uStack_20 = param_4;
  iVar3 = FUN_08000d54(param_1,&DAT_0801994c);
  iVar4 = FUN_08000d54(param_1,&DAT_08019950);
  if (((iVar3 == 0 && iVar4 == 0) || ((iVar3 != 0 && (iVar3 - (int)param_1 < 0x11)))) ||
     ((iVar4 != 0 && (iVar4 - (int)param_1 < 0x11)))) {
    uVar5 = 0;
  }
  else {
    local_28 = *param_1;
    uVar2 = FUN_08021adc(&local_28,4);
    *(undefined2 *)(param_2 + 2) = uVar2;
    local_28 = CONCAT22(local_28._2_2_,*(undefined2 *)((int)param_1 + 5));
    uVar1 = FUN_08021adc(&local_28,2);
    *(undefined1 *)(param_2 + 4) = uVar1;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)((int)param_1 + 7);
    local_28 = *(int *)((int)param_1 + 9);
    local_24 = CONCAT31(local_24._1_3_,*(undefined1 *)((int)param_1 + 0xd));
    uVar2 = FUN_08021adc(&local_28,5);
    *(undefined2 *)(param_2 + 6) = uVar2;
    local_28 = CONCAT22(local_28._2_2_,*(undefined2 *)((int)param_1 + 0xf));
    uVar1 = FUN_08021adc(&local_28,2);
    *(undefined1 *)(param_2 + 8) = uVar1;
    *(undefined1 *)(param_2 + 5) = *(undefined1 *)((int)param_1 + 0x11);
    puVar7 = (undefined3 *)((int)param_1 + 0x13);
    iVar3 = FUN_08000d54(puVar7,&DAT_08019954);
    *(undefined2 *)(param_2 + 0xd) = 0;
    if ((2 < (iVar3 - (int)puVar7) + 1) &&
       (((uVar6 = (uint)*(byte *)(iVar3 + 1), uVar6 - 0x30 < 10 || (uVar6 == 0x20)) ||
        (uVar6 == 0x2e)))) {
      local_28._0_3_ = *puVar7;
      uVar2 = FUN_08021adc(&local_28,3);
      *(undefined2 *)(param_2 + 0xb) = uVar2;
      local_28 = CONCAT13(local_28._3_1_,*(undefined3 *)(iVar3 + 1));
      uVar2 = FUN_08021adc(&local_28,3);
      *(undefined2 *)(param_2 + 0xd) = uVar2;
      iVar3 = FUN_08000d54((int)param_1 + 0x1a,&DAT_08019954);
    }
    *(undefined2 *)(param_2 + 9) = 0;
    if ((*(char *)(iVar3 + 1) == 'A') && (*(char *)(iVar3 + 2) == '=')) {
      local_28 = *(int *)(iVar3 + 3);
      local_24 = CONCAT22(local_24._2_2_,*(undefined2 *)(iVar3 + 7));
      FUN_08021adc(&local_28,6);
      uVar8 = FUN_080289b0();
      uVar8 = FUN_0802841c((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)DAT_08019958,
                           (int)((ulonglong)DAT_08019958 >> 0x20));
      uVar2 = FUN_0802880c((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      *(undefined2 *)(param_2 + 9) = uVar2;
    }
    uVar5 = 1;
  }
  return CONCAT44(local_28,uVar5);
}

