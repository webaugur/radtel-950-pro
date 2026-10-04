/**
 * @brief fun_08023678
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08023678, Ghidra name FUN_08023678, 204 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08023678(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_080207ec(6);
  thunk_FUN_0801c150(1);
  pcVar1 = DAT_08023744;
  if (param_1 == 1) {
    FUN_0801c654(0x30);
    pcVar1[2] = '\x04';
    pcVar1[3] = '\x01';
    *pcVar1 = '\x01';
  }
  else {
    FUN_0801c654(0x1e);
  }
  FUN_0801c73c(0);
  FUN_0800ad06(0x1e);
  FUN_080207ec(1);
  FUN_0800ad06(100);
  FUN_080007de(1);
  uVar2 = DAT_08023748;
  while ((((iVar3 = FUN_08012ace(uVar2,8), iVar3 == 0 || (iVar3 = FUN_08012ace(uVar2,4), iVar3 == 0)
           ) || ((*(char *)(DAT_08023750 + (uint)*(byte *)(DAT_0802374c + 9)) == '\x01' &&
                 (iVar3 = FUN_08012ace(uVar2,0x20), iVar3 == 0)))) ||
         (iVar3 = FUN_08012ace(uVar2,0x40), iVar3 == 0))) {
    if ((*(short *)(pcVar1 + 2) == 0) && (param_1 == 1)) {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
        thunk_FUN_0801c654(10);
      }
      else {
        *pcVar1 = '\x01';
        thunk_FUN_0801c654(0x30);
      }
      pcVar1[2] = '\x04';
      pcVar1[3] = '\x01';
    }
  }
  FUN_080007de(0);
  FUN_0801ac54(0);
  thunk_FUN_0801c150(0);
  return;
}

