/**
 * @brief fun_08024a8c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08024a8c, Ghidra name FUN_08024a8c, 74 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08024a8c(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000038;
  
  uVar2 = FUN_080291f8((int)in_stack_00000038,(int)((ulonglong)in_stack_00000038 >> 0x20));
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  uVar3 = FUN_08028a98((int)uVar2,uVar1,(int)DAT_08024b38,(int)((ulonglong)DAT_08024b38 >> 0x20));
  uVar3 = FUN_08028fa0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)DAT_08024b40,
                       (int)((ulonglong)DAT_08024b40 >> 0x20));
  uVar2 = FUN_08028a98((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar2,uVar1);
  FUN_08024b50((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)DAT_08024b48,
               (int)((ulonglong)DAT_08024b48 >> 0x20));
  return;
}

