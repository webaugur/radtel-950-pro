/**
 * @brief fun_0801967c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801967c, Ghidra name FUN_0801967c, 138 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801967c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_418 [1024];
  
  iVar1 = DAT_08019708;
  if (*(char *)(DAT_08019708 + 9) == '\x01') {
    *(undefined1 *)(DAT_08019708 + -0xb) = 0;
  }
  else {
    if (*(char *)(DAT_08019708 + 0x15) != '\0') {
      FUN_08021824(*(undefined4 *)(DAT_08019708 + 0xc),auStack_418,0x400);
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 0x400;
      iVar3 = iVar1 + 0x18;
      FUN_08025d68(auStack_418,iVar3,0x400);
      FUN_080081ac(iVar3,iVar3,0x800);
      *(undefined1 *)(iVar1 + 0x15) = 0;
    }
    if (*(char *)(iVar1 + 0x16) != '\0') {
      FUN_08021824(*(undefined4 *)(iVar1 + 0xc),auStack_418,0x400);
      *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 0x400;
      uVar2 = DAT_0801970c;
      FUN_08025d68(auStack_418,DAT_0801970c,0x400);
      FUN_080081ac(uVar2,uVar2,0x800);
      *(undefined1 *)(iVar1 + 0x16) = 0;
    }
  }
  return;
}

