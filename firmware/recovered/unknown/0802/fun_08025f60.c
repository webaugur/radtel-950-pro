/**
 * @brief fun_08025f60
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08025f60, Ghidra name FUN_08025f60, 146 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08025f60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  ushort in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined1 auStack_120 [52];
  undefined4 local_ec;
  undefined1 local_e4;
  byte abStack_e3 [185];
  short local_2a;
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar2 = in_stack_00000038;
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  uVar3 = FUN_08000ea6(in_stack_00000038);
  uVar5 = (uint)uVar3;
  local_2a = uVar3 + 4 + in_stack_00000034;
  FUN_08001016(&local_e4);
  local_e4 = 0x7e;
  FUN_08000ee4(abStack_e3,&local_c,in_stack_00000034);
  FUN_08000ee4(abStack_e3 + in_stack_00000034,uVar2,uVar5);
  local_ec = uVar2;
  FUN_08000f6e(auStack_120,&stack0x00000004,0x32);
  uVar4 = FUN_0802601a(local_c,uStack_8,uStack_4,param_5);
  iVar1 = in_stack_00000034 - 0xe4;
  abStack_e3[uVar5 + iVar1 + 0xe4] = ~(byte)uVar4;
  abStack_e3[uVar5 + iVar1 + 0xe5] = ~(byte)((ushort)uVar4 >> 8);
  abStack_e3[uVar5 + iVar1 + 0xe6] = 0x7e;
  FUN_08000ee4(param_1,&local_e4,0xbc);
  return;
}

