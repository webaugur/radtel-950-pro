/**
 * @brief fun_08006184
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08006184, Ghidra name FUN_08006184, 80 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08006184(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  fVar2 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  uVar4 = FUN_080297fc((fVar2 / DAT_080061d4 + fVar3) / DAT_080061d8);
  uVar5 = FUN_080289f8(param_1);
  uVar1 = FUN_0802819c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar4,
                       (int)((ulonglong)uVar4 >> 0x20));
  return uVar1;
}

