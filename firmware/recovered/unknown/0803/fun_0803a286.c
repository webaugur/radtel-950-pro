/**
 * @brief fun_0803a286
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0803a286, Ghidra name FUN_0803a286, 36 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_0803a286(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *unaff_r6;
  undefined8 in_d18;
  undefined8 in_d25;
  undefined8 in_d28;
  
  uVar1 = *unaff_r6;
  uVar2 = unaff_r6[1];
  VectorShiftLeft(in_d28,0x1f,0x20,1);
  *(undefined4 *)(param_2 + 0x30) = unaff_r6[2];
  VectorShiftRightInsert(in_d25,in_d18,1);
  func_0x07fd92a6(uVar1,param_2 + -199,param_3,uVar2);
  return CONCAT44(param_3,param_2);
}

