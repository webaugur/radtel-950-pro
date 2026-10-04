/**
 * @brief fun_08021228
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021228, Ghidra name FUN_08021228, 94 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08021228(void)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar3 = FUN_08013c40();
  iVar1 = DAT_08021288;
  uVar4 = *(short *)(DAT_08021288 + 0xc) + 1;
  *(ushort *)(DAT_08021288 + 0xc) = uVar4;
  if (uVar3 <= uVar4) {
    *(undefined2 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 0x24);
    sVar2 = FUN_0801c8e0(*(undefined4 *)(iVar1 + 0x14),*(undefined2 *)(iVar1 + 6));
    if (*(ushort *)(iVar1 + 2) < 0x30) {
      FUN_08020bbc((int)sVar2);
    }
    else {
      FUN_08020bbc((int)(short)(sVar2 % 5 + -0x78));
    }
    if (*(int *)(DAT_0802128c + 4) == 0) {
      FUN_08020ce8(*(undefined4 *)(iVar1 + 0x14));
    }
    *(undefined2 *)(iVar1 + 6) = 0;
    return;
  }
  *(uint *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + (uint)*(ushort *)(iVar1 + 0x18);
  return;
}

