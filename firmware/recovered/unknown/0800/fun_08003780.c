/**
 * @brief fun_08003780
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08003780, Ghidra name FUN_08003780, 120 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08003780(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = DAT_080037f8;
  uVar5 = 0;
  uVar7 = 0;
  while ((uVar7 < param_2 >> 5 && (*(ushort *)(iVar1 + 0x202) < *(ushort *)(iVar1 + 0x204)))) {
    iVar3 = FUN_08007414(DAT_080037f8);
    iVar4 = DAT_080037fc;
    if (iVar3 != 0) {
      iVar4 = 0x8000000;
    }
    *(short *)(iVar1 + 0x202) = *(short *)(iVar1 + 0x202) + 1;
    iVar2 = DAT_08003804;
    iVar3 = DAT_08003800;
    for (uVar5 = uVar7 << 5; uVar5 < (uVar7 + 1) * 0x20; uVar5 = uVar5 + 1) {
      uVar6 = *(int *)(iVar3 + 0xc) + iVar4;
      *(uint *)(iVar3 + 0xc) = uVar6;
      *(undefined2 *)(param_1 + uVar5 * 2) = *(undefined2 *)(iVar2 + (uVar6 >> 0x18) * 2);
    }
    uVar7 = uVar7 + 1;
  }
  for (; uVar5 < param_2; uVar5 = uVar5 + 1) {
    *(undefined2 *)(param_1 + uVar5 * 2) = 0x800;
  }
  return;
}

