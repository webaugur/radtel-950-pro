/**
 * @brief fun_080008ca
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080008ca, Ghidra name FUN_080008ca, 82 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080008ca(byte *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  
  if (param_3 == 1) {
    uVar1 = 1;
  }
  else {
    if ((int)((uint)*param_1 << 0x1a) < 0) {
      param_3 = *(uint *)(param_1 + 0x1c);
    }
    for (uVar1 = 0; (uVar1 < param_3 && (param_2[uVar1] != '\0')); uVar1 = uVar1 + 1) {
    }
  }
  puVar2 = param_2 + uVar1;
  *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - uVar1;
  *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uVar1;
  FUN_0800087c(param_1);
  for (; param_2 < puVar2; param_2 = param_2 + 1) {
    (**(code **)(param_1 + 4))(*param_2,*(undefined4 *)(param_1 + 8));
  }
  FUN_080008a8(param_1);
  return;
}

