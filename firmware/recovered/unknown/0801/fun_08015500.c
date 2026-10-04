/**
 * @brief fun_08015500
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015500, Ghidra name FUN_08015500, 44 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08015500(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  dword dVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = DAT_0801552c;
  FUN_0801cc2a(*(undefined2 *)(DAT_0801552c + 0xc),*(undefined2 *)(DAT_0801552c + 0x10),
               *(undefined2 *)(DAT_0801552c + 0xe),*(undefined2 *)(DAT_0801552c + 0x12));
  uVar1 = *(ushort *)(iVar4 + 0x12);
  uVar2 = *(ushort *)(iVar4 + 0xe);
  uVar3 = *(ushort *)(iVar4 + 0x14);
  FUN_08027b68();
  dVar5 = DWORD_08027980;
  FUN_08012ae2(DWORD_08027980,2);
  FUN_08012ae6(dVar5,8);
  FUN_08012ae2(dVar5,1);
  uVar6 = FUN_08012adc(dVar5);
  for (uVar7 = 0; uVar7 < ((uint)uVar3 * ((uint)uVar1 - (uint)uVar2) & 0xffff);
      uVar7 = uVar7 + 1 & 0xffff) {
    FUN_08012ae2(dVar5,1);
    FUN_08012afa(dVar5,uVar6 & 0xff | (uint)*(byte *)(iVar4 + -0x9600 + uVar7) << 8);
    FUN_08012ae6(dVar5,1);
  }
  FUN_08012ae6(dVar5,2);
  return;
}

