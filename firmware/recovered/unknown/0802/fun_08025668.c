/**
 * @brief fun_08025668
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08025668, Ghidra name FUN_08025668, 40 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08025668(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined8 *unaff_r4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  uint in_stack_0000004c;
  
  param_1 = param_1 >> 0x1e;
  uVar5 = FUN_080289b0(in_stack_00000008 << 2);
  uVar1 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar6 = FUN_080289f8(in_stack_0000000c);
  uVar6 = FUN_08028a98((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)DAT_080257d8,
                       (int)((ulonglong)DAT_080257d8 >> 0x20));
  uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar7 = FUN_080289f8(in_stack_00000010);
  uVar7 = FUN_08028a98((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)DAT_080257e0,
                       (int)((ulonglong)DAT_080257e0 >> 0x20));
  uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar8 = FUN_080289f8(in_stack_00000014);
  uVar8 = FUN_08028a98((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)DAT_080257e8,
                       (int)((ulonglong)DAT_080257e8 >> 0x20));
  uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uVar9 = FUN_0802819c((int)uVar7,uVar3,(int)uVar8,uVar4);
  uVar9 = FUN_0802819c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar6,uVar2);
  FUN_0802819c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar5,uVar1);
  uVar5 = FUN_080291f8(0,extraout_r1,(int)uVar5,uVar1);
  uVar5 = FUN_080291f8((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,uVar2);
  uVar5 = FUN_080291f8((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar7,uVar3);
  uVar5 = FUN_08028fa0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar8,uVar4);
  uVar5 = FUN_08028a98((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)DAT_080257f0,
                       (int)((ulonglong)DAT_080257f0 >> 0x20));
  uVar6 = FUN_08028a98(0,extraout_r1,(int)DAT_080257f8,(int)((ulonglong)DAT_080257f8 >> 0x20));
  uVar5 = FUN_0802819c((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar5,
                       (int)((ulonglong)uVar5 >> 0x20));
  uVar6 = FUN_08028a98(0,extraout_r1,(int)DAT_08025800,(int)((ulonglong)DAT_08025800 >> 0x20));
  uVar5 = FUN_0802819c((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar5,
                       (int)((ulonglong)uVar5 >> 0x20));
  if ((in_stack_0000004c & 0x80000000) != 0) {
    param_1 = -param_1;
    uVar5 = FUN_08027ec0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  }
  *unaff_r4 = uVar5;
  return param_1;
}

