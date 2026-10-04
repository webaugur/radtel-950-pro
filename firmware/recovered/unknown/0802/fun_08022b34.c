/**
 * @brief fun_08022b34
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022b34, Ghidra name FUN_08022b34, 66 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022b34(void)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined1 uVar3;
  int iVar4;
  
  uVar1 = DAT_08022b78;
  iVar4 = FUN_08022af4(DAT_08022b78,0x525);
  if (iVar4 != 0) {
    uVar3 = FUN_08022c9c(uVar1);
    puVar2 = DAT_08022b7c;
    if ((DAT_08022b7c[2] == 0) && (*(char *)(DAT_08022b80 + 1) == '\x01')) {
      *(undefined1 *)((int)DAT_08022b7c + *DAT_08022b7c + 0xc) = uVar3;
      *puVar2 = *puVar2 + 1 & 0x1ff;
      puVar2[1] = 0;
    }
  }
  return;
}

