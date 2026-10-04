/**
 * @brief fun_08018df4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08018df4, Ghidra name FUN_08018df4, 76 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08018df4(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_0802387c((uint)*(byte *)(DAT_08018e40 + 5) % 10);
  puVar1 = DAT_08018e44;
  DAT_08018e44[-2] = uVar3;
  *(undefined1 *)(puVar1 + -1) = 1;
  *puVar1 = 0xa41;
  puVar1[1] = uVar3;
  puVar1[2] = puVar1[-1];
  puVar1[3] = 0xa41;
  *(undefined1 *)((int)puVar1 + 0x19) = 0;
  *(undefined1 *)((int)puVar1 + 0x1b) = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  puVar2 = DAT_08018e48;
  *DAT_08018e48 = 0;
  puVar2[1] = 0;
  return;
}

