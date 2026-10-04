/**
 * @brief fun_0800623c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800623c, Ghidra name FUN_0800623c, 52 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0800623c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0802841c();
  uVar3 = FUN_080289b0(param_1);
  uVar1 = FUN_0802819c((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar2,
                       (int)((ulonglong)uVar2 >> 0x20));
  return uVar1;
}

