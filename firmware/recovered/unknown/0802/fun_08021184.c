/**
 * @brief fun_08021184
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021184, Ghidra name FUN_08021184, 78 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08021184(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  
  puVar1 = DAT_080211d4;
  *DAT_080211d4 = 0;
  puVar1[2] = 0xffff;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 0xe) = param_1;
  uVar2 = FUN_08013b98();
  puVar1[0xc] = uVar2;
  uVar2 = FUN_08013c40();
  puVar1[0xd] = uVar2;
  uVar3 = FUN_08012dbc();
  *(uint *)(puVar1 + 0x12) = *(int *)(puVar1 + 0xe) - (uVar3 >> 1);
  uVar3 = FUN_08012dbc();
  *(uint *)(puVar1 + 0x10) = *(int *)(puVar1 + 0xe) + (uVar3 >> 1);
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(puVar1 + 0x12);
  *(int *)(puVar1 + 10) = *(int *)(puVar1 + 0xe);
  uVar2 = FUN_080212c0((int)*(short *)(DAT_080211d8 + 0xc));
  puVar1[5] = uVar2;
  return;
}

