/**
 * @brief fun_0802156c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802156c, Ghidra name FUN_0802156c, 118 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0802156c(void)

{
  ushort uVar1;
  ushort *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  puVar2 = DAT_080215e4;
  uVar1 = *DAT_080215e4;
  if (DAT_080215e4[3] < uVar1) {
    DAT_080215e4[3] = uVar1;
    *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(puVar2 + 8);
    puVar2[7] = puVar2[6];
  }
  if (uVar1 < puVar2[2]) {
    puVar2[2] = uVar1;
  }
  uVar4 = FUN_08013c40();
  if (puVar2[1] < 0x30) {
    uVar3 = FUN_08021290(*puVar2);
  }
  else {
    iVar5 = FUN_08012558(*(undefined4 *)(puVar2 + 8));
    if (iVar5 == 3) {
      uVar3 = FUN_08021290(((byte)*puVar2 & 7) + 0x8c);
    }
    else {
      uVar3 = FUN_08021290(((byte)*puVar2 & 7) + 0x6e);
    }
  }
  iVar5 = DAT_080215e8;
  uVar1 = puVar2[6];
  for (uVar6 = 0; uVar6 < 0x3c0 / uVar4; uVar6 = uVar6 + 1 & 0xffff) {
    *(undefined1 *)(iVar5 + ((0x3c0 / uVar4) * (uint)uVar1 & 0xffff) + uVar6) = uVar3;
  }
  return;
}

