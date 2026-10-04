/**
 * @brief fun_08025690
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08025690, Ghidra name FUN_08025690, 4 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_08025690(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined8 *unaff_r4;
  int unaff_r5;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint in_stack_0000004c;
  
  uVar3 = FUN_080289f8();
  uVar3 = FUN_08028a98((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)DAT_080257e0,
                       (int)((ulonglong)DAT_080257e0 >> 0x20));
  uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar4 = FUN_080289f8();
  uVar4 = FUN_08028a98((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)DAT_080257e8,
                       (int)((ulonglong)DAT_080257e8 >> 0x20));
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar5 = FUN_0802819c((int)uVar3,uVar1,(int)uVar4,uVar2);
  FUN_0802819c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),param_1,param_2);
  FUN_0802819c();
  uVar5 = FUN_080291f8(0,extraout_r1);
  uVar5 = FUN_080291f8((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),param_1,param_2);
  uVar3 = FUN_080291f8((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar3,uVar1);
  uVar3 = FUN_08028fa0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,uVar2);
  uVar3 = FUN_08028a98((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)DAT_080257f0,
                       (int)((ulonglong)DAT_080257f0 >> 0x20));
  uVar4 = FUN_08028a98(0,extraout_r1,(int)DAT_080257f8,(int)((ulonglong)DAT_080257f8 >> 0x20));
  uVar3 = FUN_0802819c((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar3,
                       (int)((ulonglong)uVar3 >> 0x20));
  uVar4 = FUN_08028a98(0,extraout_r1,(int)DAT_08025800,(int)((ulonglong)DAT_08025800 >> 0x20));
  uVar3 = FUN_0802819c((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar3,
                       (int)((ulonglong)uVar3 >> 0x20));
  if ((in_stack_0000004c & 0x80000000) != 0) {
    unaff_r5 = -unaff_r5;
    uVar3 = FUN_08027ec0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  }
  *unaff_r4 = uVar3;
  return unaff_r5;
}

