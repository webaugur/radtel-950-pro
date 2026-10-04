/**
 * @brief fun_08016a00
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016a00, Ghidra name FUN_08016a00, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016a00(void)

{
  byte bVar1;
  undefined2 uVar2;
  undefined *puVar3;
  
  FUN_0800e0dc();
  puVar3 = PTR_DAT_08016a34;
  *(undefined2 *)(PTR_DAT_08016a34 + -2) = 2;
  puVar3[-3] = 1;
  *(undefined **)(puVar3 + 0x10) = PTR_DAT_08016a38;
  bVar1 = PTR_DAT_08016a3c[0x62];
  uVar2 = (undefined2)(bVar1 & 1);
  *(undefined2 *)(puVar3 + 4) = uVar2;
  *(uint *)puVar3 = bVar1 & 1;
  *(undefined2 *)(puVar3 + 6) = uVar2;
  *(undefined2 *)(PTR_DAT_08016a34 + -7) = 0;
  return;
}

