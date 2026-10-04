/**
 * @brief fun_08006ef8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08006ef8, Ghidra name FUN_08006ef8, 128 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08006ef8(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = DAT_08006f78;
  if ((((*DAT_08006f78 != '\x01') && (*DAT_08006f78 != '\x02')) &&
      (iVar3 = FUN_08008aa8(), iVar3 == 0)) &&
     ((pcVar2[0x14] != '\x04' && (iVar3 = FUN_0800a0c0(), iVar3 == 0)))) {
    FUN_08006f84();
    iVar3 = DAT_08006f7c;
    cVar1 = *(char *)(DAT_08006f7c + 1);
    if ((cVar1 == '\x05') || (cVar1 == '\x06')) {
      *(char *)(DAT_08006f7c + 4) = (char)((*(byte *)(DAT_08006f7c + 4) + 1) % 0x14);
      FUN_0800703c();
      if (*(char *)(iVar3 + 4) == '\0') {
        if (*(char *)(DAT_08006f80 + 7) != '\0') {
          FUN_080234ac(0x3a);
          return;
        }
        FUN_0801b3fc();
        FUN_080073f8(8);
        return;
      }
    }
    else if (*(char *)(DAT_08006f7c + 2) != cVar1) {
      *(char *)(DAT_08006f7c + 2) = cVar1;
      FUN_0800af0c(1);
      return;
    }
  }
  return;
}

