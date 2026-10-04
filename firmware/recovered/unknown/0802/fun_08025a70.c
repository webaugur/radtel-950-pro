/**
 * @brief fun_08025a70
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08025a70, Ghidra name FUN_08025a70, 272 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08025a70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 in_d0;
  undefined4 extraout_s1;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uStack_1c;
  
  uStack_1c = (uint)((ulonglong)in_d0 >> 0x20);
  uVar4 = (undefined4)in_d0;
  if ((uStack_1c & 0x7fffffff) < 0x3e400000) {
    iVar1 = FUN_08023abc(uVar4,uStack_1c);
    if (iVar1 == 4) {
      FUN_08025c38();
    }
    return uVar4;
  }
  uVar10 = FUN_08028a98(uVar4,uStack_1c,uVar4,uStack_1c);
  uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar2 = (undefined4)uVar10;
  uVar10 = FUN_08028a98(uVar4,uStack_1c,uVar2,uVar5);
  uVar6 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar3 = (undefined4)uVar10;
  uVar8 = FUN_08025978(uVar2,DAT_08025b88 + 0x8025ae4,5);
  uVar9 = (undefined4)DAT_08025b90;
  uVar7 = (undefined4)((ulonglong)DAT_08025b90 >> 0x20);
  if (param_1 == 0) {
    uVar10 = FUN_08028a98(uVar2,uVar5,uVar8,extraout_s1);
    uVar10 = FUN_0802819c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar9,uVar7);
    uVar10 = FUN_08028a98((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar3,uVar6);
    uVar4 = FUN_0802819c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar4,uStack_1c);
  }
  else {
    uVar10 = FUN_08028a98(uVar3,uVar6,uVar9,uVar7);
    uVar11 = FUN_08028a98(uVar3,uVar6,uVar8,extraout_s1);
    uVar12 = FUN_08028a98();
    uVar11 = FUN_080291f8((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
                          (int)((ulonglong)uVar11 >> 0x20));
    FUN_08028a98((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar2,uVar5);
    uVar11 = FUN_080291f8();
    uVar10 = FUN_080291f8((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                          (int)((ulonglong)uVar10 >> 0x20));
    uVar4 = FUN_08028fa0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar4,uStack_1c);
  }
  return uVar4;
}

