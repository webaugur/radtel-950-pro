/**
 * @brief fun_0800c35c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800c35c, Ghidra name FUN_0800c35c, 398 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0800c35c(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  
  iVar12 = 0;
  FUN_08000bca(_DAT_0800c4ec,0x10,0x20);
  iVar6 = DAT_0800c4fc;
  pbVar4 = DAT_0800c4f8;
  iVar3 = _DAT_0800c4ec;
  if (param_1 == 1) {
    bVar1 = *DAT_0800c4f8;
    for (uVar5 = 0; uVar5 < bVar1; uVar5 = uVar5 + 1) {
      *(undefined1 *)(iVar3 + uVar5) = *(undefined1 *)((uint)pbVar4[uVar5 + 1] + iVar6);
    }
    *(undefined1 *)(iVar3 + uVar5) = 0;
  }
  else {
    uVar5 = (uint)*(byte *)(_DAT_0800c4ec + -9);
    puVar9 = (undefined4 *)(uVar5 * 0xc + 4 + *(int *)(_DAT_0800c4ec + -4));
    if ((int)uVar5 < (int)(*(byte *)(_DAT_0800c4ec + -10) - 1)) {
      FUN_08000850(_DAT_0800c4ec,s__s__s_0800c4ef + 1,*puVar9,
                   *(undefined4 *)((uVar5 + 1) * 0xc + 4 + *(int *)(_DAT_0800c4ec + -4)));
    }
    else {
      FUN_08000850(_DAT_0800c4ec,&DAT_0800c500,*puVar9);
    }
  }
  FUN_08000bca(_DAT_0800c4ec + 0x12,0x10,0x20);
  *(undefined1 *)(iVar3 + 0x22) = 0;
  iVar6 = FUN_08000ea6(*(undefined4 *)((uint)*(byte *)(iVar3 + -9) * 0xc + 8 + *(int *)(iVar3 + -4))
                      );
  if (*(char *)(iVar3 + -0xd) == '\x02') {
    bVar1 = *(byte *)(iVar3 + -0xb);
    uVar5 = bVar1 / 7;
    uVar8 = iVar6 + uVar5 * -7;
    if (7 < uVar8) {
      uVar8 = 7;
    }
    bVar2 = *(byte *)(iVar3 + -9);
    iVar6 = *(int *)(iVar3 + -4);
    for (uVar7 = 0; uVar7 < uVar8; uVar7 = uVar7 + 1) {
      *(undefined1 *)(iVar3 + uVar7 * 2 + 0x13) =
           *(undefined1 *)(*(int *)(iVar6 + (uint)bVar2 * 0xc + 8) + uVar7 + uVar5 * 7);
    }
    *(undefined1 *)(iVar3 + ((uint)bVar1 % 7) * 2 + 0x12) = 8;
  }
  else {
    uVar5 = *(byte *)(iVar3 + -0xb) / 10;
    iVar10 = uVar5 * 10;
    uVar5 = iVar6 + uVar5 * -10 >> 1;
    if (5 < uVar5) {
      uVar5 = 5;
    }
    if (*(char *)(iVar3 + -0xd) == '\x01') {
      uVar8 = (uint)*(byte *)(iVar3 + -0xb) % 10 >> 1;
      if (uVar8 == 0) {
        iVar12 = 1;
        *(undefined1 *)(iVar3 + 0x12) = 8;
      }
      else {
        iVar12 = 0;
        *(undefined1 *)(uVar8 * 3 + iVar3 + 0x11) = 8;
      }
    }
    for (uVar8 = 0; uVar8 < uVar5; uVar8 = uVar8 + 1) {
      piVar11 = (int *)((uint)*(byte *)(iVar3 + -9) * 0xc + 8 + *(int *)(iVar3 + -4));
      iVar6 = uVar8 * 3 + iVar12 + iVar3;
      *(undefined1 *)(iVar6 + 0x12) = *(undefined1 *)(*piVar11 + iVar10 + uVar8 * 2);
      *(undefined1 *)(iVar6 + 0x13) = *(undefined1 *)(*piVar11 + uVar8 * 2 + iVar10 + 1);
    }
  }
  return;
}

