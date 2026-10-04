/**
 * @brief fun_08007894
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08007894, Ghidra name FUN_08007894, 110 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08007894(void)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = DAT_08007904;
  iVar4 = FUN_08022af4(DAT_08007904,0x525);
  if (iVar4 != 0) {
    uVar3 = FUN_08022c9c(uVar1);
    puVar2 = DAT_08007910;
    iVar4 = DAT_0800790c;
    if (*(char *)(DAT_08007908 + 0x47) == '\0') {
      if (DAT_08007910[2] == 0) {
        *(undefined1 *)((int)DAT_08007910 + *DAT_08007910 + 0x10) = uVar3;
        *puVar2 = (*puVar2 + 1) % 0x8c;
        puVar2[1] = 0;
        return;
      }
    }
    else {
      *(undefined2 *)(DAT_0800790c + 6) = 2000;
      *(undefined1 *)((uint)*(ushort *)(iVar4 + 4) + iVar4 + 0x10) = uVar3;
      uVar5 = *(ushort *)(iVar4 + 4) + 1;
      *(short *)(iVar4 + 4) = (short)uVar5 + (short)(uVar5 / 0x8c) * -0x8c;
      *(undefined1 *)(iVar4 + 3) = 1;
      *(undefined1 *)(iVar4 + 1) = 0;
    }
  }
  return;
}

