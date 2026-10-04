/**
 * @brief fun_080168b4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080168b4, Ghidra name FUN_080168b4, 62 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080168b4(uint param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_0800e0dc();
  puVar2 = PTR_DAT_080168f4;
  *(undefined2 *)(PTR_DAT_080168f4 + 1) = 2;
  *puVar2 = 1;
  puVar3 = PTR_DAT_080168fc;
  if (PTR_DAT_080168f8[8] == '\x01') {
    puVar3 = PTR_DAT_080168fc + -8;
  }
  *(undefined **)(puVar2 + 0x13) = puVar3;
  uVar1 = (undefined2)(param_1 & 1);
  *(undefined2 *)(puVar2 + 7) = uVar1;
  *(uint *)(puVar2 + 3) = param_1 & 1;
  *(undefined2 *)(puVar2 + 9) = uVar1;
  *(undefined2 *)(PTR_DAT_080168f4 + -4) = 0;
  return;
}

