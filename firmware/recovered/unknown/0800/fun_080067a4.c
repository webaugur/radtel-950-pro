/**
 * @brief fun_080067a4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080067a4, Ghidra name FUN_080067a4, 152 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080067a4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_08006808;
  if (*(char *)(DAT_08006808 + 0xb) != '\0') {
    *(undefined1 *)(DAT_08006808 + 0xb) = 0;
    iVar1 = DAT_0800680c;
    if (*(char *)(DAT_0800680c + 0x1c) == *(char *)(iVar2 + 9)) {
      iVar2 = DAT_08006810 + -0x394;
      iVar3 = FUN_080062c4();
      if (iVar3 != 0) {
        FUN_08000ee4(DAT_08006810 + -0xe5,iVar2,0xe5);
        FUN_08001016(iVar2,0xe5);
        FUN_08010114();
        if (*(char *)(iVar1 + 0x20) != '\0') {
          FUN_080073f8(9);
        }
        FUN_08008d30();
        if (*(char *)(iVar1 + 0x21) != '\0') {
          FUN_08011928(0);
          *(undefined1 *)(DAT_0800dd20 + 1) = 0x14;
          iVar2 = DAT_0800dd24;
          *(undefined1 *)(DAT_0800dd24 + 1) = 3;
          *(undefined1 *)(iVar2 + 2) = 0;
          *(undefined1 *)(iVar2 + 4) = 0;
          *(undefined1 *)(iVar2 + 3) = 1;
          *(undefined1 *)(iVar2 + 8) = 1;
          *(undefined2 *)(iVar2 + 6) =
               *(undefined2 *)(DAT_0800dd2c + (uint)*(byte *)(DAT_0800dd28 + 0x78) * 2);
          FUN_080046c0();
          return;
        }
      }
    }
  }
  return;
}

