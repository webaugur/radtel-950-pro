/**
 * @brief fun_0801dc7c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801dc7c, Ghidra name FUN_0801dc7c, 246 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801dc7c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = DAT_0801dd84;
  iVar4 = DAT_0801dd80;
  iVar1 = DAT_0801dd74;
  uVar5 = (uint)(ushort)((ushort)*(byte *)(DAT_0801dd74 + 1) * 99 + *(short *)(DAT_0801dd74 + 2));
  if ((*(char *)(DAT_0801dd78 + 0x4a) == -0x5b) && (*(char *)(DAT_0801dd84 + 0xfa) == '\x02')) {
    if (*(int *)(DAT_0801dd7c + 3) == 0) {
      FUN_080158b0(DAT_0801dd88,uVar5,0);
    }
    else {
      FUN_080158b0(DAT_0801dd88,uVar5,1);
    }
    if (*(char *)(iVar4 + 6) != '\0') {
      *(char *)(iVar1 + 1) = (char)(uVar5 / 99);
    }
    iVar4 = DAT_0801dd88 + 0xfa;
    FUN_080158b0(iVar4,*(undefined1 *)(iVar1 + 1),0);
    uVar5 = 0;
    do {
      if (*(char *)(uVar5 + ((uint)*(byte *)(iVar1 + 1) * 99 >> 3) + iVar2 + 0x33e) != '\0') {
        FUN_080158b0(iVar4,(uint)*(byte *)(iVar1 + 1),1);
        break;
      }
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < 0xc);
  }
  else {
    if (*(int *)(DAT_0801dd7c + 3) == 0) {
      FUN_080158b0(DAT_0801dd84 + 2,uVar5,0);
    }
    else {
      FUN_080158b0(DAT_0801dd84 + 2,uVar5,1);
    }
    if (*(char *)(iVar4 + 6) != '\0') {
      *(char *)(iVar1 + 1) = (char)(uVar5 / 99);
    }
    uVar3 = DAT_0801dd8c;
    FUN_080158b0(DAT_0801dd8c,*(undefined1 *)(iVar1 + 1),0);
    uVar5 = 0;
    do {
      if (*(char *)(uVar5 + ((uint)*(byte *)(iVar1 + 1) * 99 >> 3) + iVar2 + 2) != '\0') {
        FUN_080158b0(uVar3,(uint)*(byte *)(iVar1 + 1),1);
        break;
      }
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < 0xc);
  }
  FUN_08018038();
  return 1;
}

