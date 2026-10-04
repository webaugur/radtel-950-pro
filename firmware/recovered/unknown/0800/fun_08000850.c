/**
 * @brief fun_08000850
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08000850, Ghidra name FUN_08000850, 38 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08000850(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_20 = param_1;
  uStack_1c = param_4;
  uStack_8 = param_3;
  uStack_4 = param_4;
  uVar1 = FUN_080016a6(param_2,&local_20,&uStack_8,DAT_08000878 + 0x800085c);
  FUN_080016cc(0,&local_20);
  return uVar1;
}

