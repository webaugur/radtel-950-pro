/**
 * @brief fun_08025808
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08025808, Ghidra name FUN_08025808, 322 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_08025808(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 in_d0;
  undefined4 extraout_s1;
  undefined8 in_d1;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_40;
  undefined4 uStack_14;
  
  uVar10 = DAT_08025950;
  uStack_14 = (uint)((ulonglong)in_d0 >> 0x20);
  uVar5 = uStack_14 & 0x7fffffff;
  uVar7 = (undefined4)DAT_08025950;
  uVar3 = (undefined4)in_d0;
  if ((uVar5 < 0x3e400000) && (iVar1 = FUN_0802880c(uVar3,uStack_14), iVar1 == 0)) {
    return uVar7;
  }
  uVar8 = FUN_08028a98(uVar3,uStack_14,uVar3,uStack_14);
  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uVar2 = (undefined4)uVar8;
  uVar6 = FUN_08025978(uVar2,DAT_08025958 + 0x8025874,6);
  uVar8 = FUN_08028a98(uVar6,extraout_s1,uVar2,uVar4);
  uVar9 = FUN_08028a98(uVar3,uStack_14,(int)in_d1,(int)((ulonglong)in_d1 >> 0x20));
  uVar8 = FUN_08028a98(uVar2,uVar4,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  uVar8 = FUN_080291f8((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                       (int)((ulonglong)uVar9 >> 0x20));
  uVar3 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uVar9 = FUN_08028a98(uVar2,uVar4,(int)DAT_08025960,(int)((ulonglong)DAT_08025960 >> 0x20));
  uVar2 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if ((int)uVar5 < DAT_08025968) {
    uVar10 = FUN_080291f8((int)uVar9,uVar2,(int)uVar8,uVar3);
    uVar3 = FUN_08028fa0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),uVar7,uVar4);
  }
  else {
    if (DAT_0802596c < (int)uVar5) {
      uStack_40 = DAT_08025970;
    }
    else {
      uStack_40 = (ulonglong)(uVar5 - 0x200000) << 0x20;
    }
    uVar6 = (undefined4)((ulonglong)uStack_40 >> 0x20);
    uVar10 = FUN_080291f8((int)uVar9,uVar2,(int)uStack_40,uVar6);
    uVar9 = FUN_080291f8(uVar7,uVar4,(int)uStack_40,uVar6);
    uVar10 = FUN_080291f8((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar8,uVar3);
    uVar3 = FUN_08028fa0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                         (int)((ulonglong)uVar9 >> 0x20));
  }
  return uVar3;
}

