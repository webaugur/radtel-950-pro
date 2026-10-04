/**
 * @brief fun_08012bcc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012bcc, Ghidra name FUN_08012bcc, 334 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x08012ce2 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_08012bcc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  undefined4 extraout_s1_06;
  undefined4 extraout_s1_07;
  undefined4 in_s4;
  undefined4 in_s6;
  undefined4 in_s7;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = FUN_080274f0();
  uVar3 = FUN_080274f0(in_s4);
  uVar1 = FUN_080291f8(in_s6,in_s7);
  uVar4 = FUN_080274f0(uVar1);
  uVar1 = FUN_08024230(uVar3);
  uVar5 = FUN_08025308(uVar4);
  uVar1 = FUN_08028a98(uVar5,extraout_s1_00,uVar1,extraout_s1);
  uVar4 = FUN_08024230(uVar4);
  uVar5 = FUN_08024230(uVar3);
  uVar6 = FUN_08025308(uVar2);
  uVar7 = FUN_08028a98(uVar6,extraout_s1_03,uVar5,extraout_s1_02);
  uVar7 = FUN_08028a98((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar4,extraout_s1_01);
  uVar3 = FUN_08025308(uVar3);
  uVar2 = FUN_08024230(uVar2);
  uVar8 = FUN_08028a98(uVar2,extraout_s1_05,uVar3,extraout_s1_04);
  uVar2 = FUN_080291f8((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,
                       (int)((ulonglong)uVar7 >> 0x20));
  FUN_08023df0(uVar1,extraout_s1_05,uVar2);
  uVar1 = FUN_08027524();
  uVar2 = (undefined4)DAT_08012d1c;
  uVar1 = FUN_0802819c(uVar1,extraout_s1_06,uVar2,(int)((ulonglong)DAT_08012d1c >> 0x20));
  uVar1 = FUN_080244e0(uVar1,extraout_s1_06,uVar2);
  FUN_0802880c(uVar1,extraout_s1_07);
  return;
}

