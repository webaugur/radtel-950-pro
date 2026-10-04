/**
 * @brief fun_0801a134
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801a134, Ghidra name FUN_0801a134, 222 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801a134(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  FUN_0801ab2c(0);
  FUN_0801320c();
  FUN_0800e828(0,1);
  pcVar1 = DAT_0801a214;
  if (DAT_0801a214[1] == '\x03') {
    if (DAT_0801a214[0x34] == '\x01') {
      FUN_080084dc(DAT_0801a214[100],*(undefined2 *)(DAT_0801a21c + 0x108));
    }
    else {
      FUN_08008488(0,1);
    }
    pcVar2 = DAT_0801a218;
    if (*DAT_0801a218 != '\x03') {
      *DAT_0801a218 = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar1[1] = '\0';
      FUN_0800cfc0();
      return;
    }
  }
  if (pcVar1[0x1f] != '\0') {
    FUN_0800ea30();
  }
  FUN_0800da50();
  if ((*(char *)(DAT_0801a220 + 0x26) == '\0') || (pcVar1[0x1e] == '\0')) {
    iVar3 = FUN_08009ba4();
    if (iVar3 == 0) {
      if (pcVar1[0x1e] != '\0') {
        FUN_0801c8fc();
      }
      *pcVar1 = '\x01';
      pcVar1[4] = '\0';
    }
    else {
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    FUN_08023678(iVar4);
    FUN_0801b300();
    if (pcVar1[0x34] != '\0') {
      FUN_08021d40(1);
      pcVar1[0x34] = '\0';
    }
    if (pcVar1[0x1e] != '\0') {
      FUN_0801c8fc();
      return;
    }
    return;
  }
  FUN_0801ac82(0);
  if (*pcVar1 == '\x01') {
    FUN_080007de();
  }
  FUN_08011928(0);
  FUN_08022eac();
  FUN_0800c980(1);
  return;
}

