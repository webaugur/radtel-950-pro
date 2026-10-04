/**
 * @brief fun_08026b70
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08026b70, Ghidra name FUN_08026b70, 60 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08026b70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort in_stack_00000034;
  undefined1 auStack_5c [64];
  short local_1c;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_08000f6e(auStack_5c,&uStack_c,in_stack_00000034);
  local_1c = in_stack_00000034 + 2;
  auStack_5c[in_stack_00000034] = 3;
  auStack_5c[in_stack_00000034 + 1] = 0xf0;
  FUN_08000ee4(param_1,auStack_5c,0x42);
  return;
}

