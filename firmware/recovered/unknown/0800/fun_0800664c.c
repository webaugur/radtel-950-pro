/**
 * @brief fun_0800664c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800664c, Ghidra name FUN_0800664c, 206 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800664c(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  
  iVar3 = DAT_08006724;
  cVar1 = *(char *)(DAT_08006724 + 2);
  cVar2 = cVar1 + -1;
  bVar4 = cVar1 + 1;
  if (param_1 == 0) {
    if (param_2 == 1) {
      if (cVar1 == '\0') {
        *(undefined1 *)(DAT_08006724 + 2) = 99;
        *(undefined1 *)(iVar3 + 3) = 1;
      }
      else {
        *(char *)(DAT_08006724 + 2) = cVar2;
      }
      if ((uint)*(byte *)(iVar3 + 2) % 6 == 5) {
        *(undefined1 *)(iVar3 + 3) = 1;
      }
    }
    else if (param_2 == 2) {
      *(byte *)(DAT_08006724 + 2) = bVar4 % 5;
    }
    else if (param_2 == 3) {
      *(undefined2 *)(DAT_08006724 + 6) =
           *(undefined2 *)(DAT_08006720 + (uint)*(byte *)(DAT_0800671c + 0x78) * 2);
      *(byte *)(iVar3 + 2) = bVar4 % 3;
    }
    else {
      *(undefined1 *)(DAT_08006724 + 2) = 0;
    }
  }
  else if (param_2 == 1) {
    *(char *)(DAT_08006724 + 2) = (char)((uint)bVar4 % 100);
    if (((uint)bVar4 % 100) % 6 == 0) {
      *(undefined1 *)(iVar3 + 3) = 1;
    }
  }
  else if (param_2 == 2) {
    if (cVar1 == '\0') {
      *(undefined1 *)(DAT_08006724 + 2) = 4;
    }
    else {
      *(char *)(DAT_08006724 + 2) = cVar2;
    }
  }
  else if (param_2 == 3) {
    *(undefined2 *)(DAT_08006724 + 6) =
         *(undefined2 *)(DAT_08006720 + (uint)*(byte *)(DAT_0800671c + 0x78) * 2);
    if (cVar1 == '\0') {
      *(undefined1 *)(iVar3 + 2) = 2;
    }
    else {
      *(char *)(iVar3 + 2) = cVar2;
    }
  }
  else {
    *(undefined1 *)(DAT_08006724 + 2) = 0;
  }
  return;
}

