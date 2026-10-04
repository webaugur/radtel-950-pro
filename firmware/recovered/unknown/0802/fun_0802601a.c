/**
 * @brief fun_0802601a
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802601a, Ghidra name FUN_0802601a, 144 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_0802601a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort in_stack_00000030;
  int in_stack_00000034;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  uStack_8 = param_3;
  uStack_c = param_2;
  local_10 = param_1;
  uVar4 = 0xffff;
  for (uVar2 = 0; uVar2 < in_stack_00000030; uVar2 = uVar2 + 1 & 0xffff) {
    uVar1 = 0;
    do {
      uVar3 = uVar4 & 1;
      uVar4 = uVar4 >> 1;
      if (uVar3 != (((uint)*(byte *)((int)&local_10 + uVar2) & 1 << (uVar1 & 0xff)) != 0)) {
        uVar4 = uVar4 ^ 0x8408;
      }
      uVar1 = uVar1 + 1 & 0xffff;
    } while (uVar1 < 8);
  }
  for (uVar2 = 0; uVar1 = FUN_08000ea6(in_stack_00000034), uVar2 < uVar1; uVar2 = uVar2 + 1 & 0xffff
      ) {
    uVar1 = 0;
    do {
      uVar3 = uVar4 & 1;
      uVar4 = uVar4 >> 1;
      if (uVar3 != (((uint)*(byte *)(in_stack_00000034 + uVar2) & 1 << (uVar1 & 0xff)) != 0)) {
        uVar4 = uVar4 ^ 0x8408;
      }
      uVar1 = uVar1 + 1 & 0xffff;
    } while (uVar1 < 8);
  }
  return uVar4;
}

