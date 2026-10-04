/**
 * @brief fun_08001ccc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08001ccc, Ghidra name FUN_08001ccc, 138 bytes.
 *       Not linked into rt950-firmware.
 */

undefined8 FUN_08001ccc(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 >> 2 | param_2 << 0x1e;
  uVar1 = param_1 - uVar3;
  uVar2 = (param_2 - (param_2 >> 2)) - (uint)(param_1 < uVar3);
  uVar4 = uVar1 >> 4 | uVar2 * 0x10000000;
  uVar3 = uVar1 + uVar4;
  uVar2 = uVar2 + (uVar2 >> 4) + (uint)CARRY4(uVar1,uVar4);
  uVar4 = uVar3 >> 8 | uVar2 * 0x1000000;
  uVar1 = uVar3 + uVar4;
  uVar2 = uVar2 + (uVar2 >> 8) + (uint)CARRY4(uVar3,uVar4);
  uVar4 = uVar1 >> 0x10 | uVar2 * 0x10000;
  uVar3 = uVar1 + uVar4;
  uVar2 = uVar2 + (uVar2 >> 0x10) + (uint)CARRY4(uVar1,uVar4);
  uVar4 = uVar2 + CARRY4(uVar3,uVar2);
  uVar1 = uVar3 + uVar2 >> 3 | uVar4 * 0x20000000;
  uVar3 = uVar4 >> 3;
  if (-1 < (int)(((param_2 - (param_1 < 10)) -
                 (((uVar3 << 2 | (uVar4 & 7) >> 1) + uVar3 + CARRY4(uVar1,uVar1 * 4)) * 2 +
                 (uint)CARRY4(uVar1 * 5,uVar1 * 5))) - (uint)(param_1 - 10 < uVar1 * 10))) {
    return CONCAT44(uVar3 + (0xfffffffe < uVar1),uVar1 + 1);
  }
  return CONCAT44(uVar3,uVar1);
}

