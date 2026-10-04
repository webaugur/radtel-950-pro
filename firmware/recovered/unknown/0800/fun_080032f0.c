/**
 * @brief fun_080032f0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080032f0, Ghidra name FUN_080032f0, 126 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080032f0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  iVar1 = DAT_08003370;
  *(undefined4 *)(DAT_08003370 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined1 *)(DAT_08003374 + 5) = 0;
  FUN_08001016(DAT_08003378,0x996);
  FUN_08000fd2(DAT_0800337c,0x233e);
  puVar3 = DAT_08003380;
  *DAT_08003380 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  *(undefined1 *)(puVar3 + 5) = 0;
  *(undefined4 *)((int)puVar3 + 0x15) = 0;
  puVar3[0xd] = iVar1 + 0x84;
  *(undefined1 *)(puVar3 + 0xe) = 4;
  *(undefined1 *)((int)puVar3 + 0x39) = 0;
  *(undefined1 *)((int)puVar3 + 0x3a) = 0;
  *(undefined4 *)((int)puVar3 + 0x2a) = 0;
  *(undefined1 *)((int)puVar3 + 0x2e) = 0;
  *(undefined4 *)((int)puVar3 + 0x2f) = 0;
  uVar4 = 0;
  do {
    *(undefined4 *)(iVar1 + 0x84 + uVar4 * 4) = 0;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 4);
  *(undefined1 *)((int)puVar3 + 0x3b) = 0;
  iVar2 = DAT_08003370;
  puVar5 = (undefined1 *)(DAT_08003370 + 0x7c);
  *(undefined1 *)(DAT_08003370 + 0x82) = 0;
  *(undefined2 *)(iVar2 + 0x7e) = 0;
  *puVar5 = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  return;
}

