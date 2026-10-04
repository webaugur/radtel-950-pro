/**
 * @brief fun_080061dc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080061dc, Ghidra name FUN_080061dc, 84 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080061dc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_0802841c();
  fVar2 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  uVar5 = FUN_080297fc(fVar2 / DAT_08006238 + fVar3);
  uVar1 = FUN_0802819c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar4,
                       (int)((ulonglong)uVar4 >> 0x20));
  return uVar1;
}

