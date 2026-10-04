/**
 * @brief fun_0800cfe0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800cfe0, Ghidra name FUN_0800cfe0, 140 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800cfe0(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_18;
  
  local_18 = 1;
  FUN_080154a4(0,0xf0,0,0x1c);
  FUN_0800af0c(0);
  iVar1 = DAT_0800d06c;
  if ((*(char *)(DAT_0800d06c + 1) != '\0') && (*DAT_0800d070 != '\x01')) {
    local_18 = DAT_0800d074;
    FUN_08027b14(6,0xa5,0x1c,0x11);
  }
  iVar2 = DAT_0800d078;
  if (*(char *)(DAT_0800d078 + 0x19) != '\0') {
    local_18 = DAT_0800d07c;
    FUN_08027b14(6,0x44,0x13,0x11);
    if (*(char *)(iVar2 + 0x1a) == '\0') {
      local_18 = DAT_0800d080;
      FUN_08027b14(6,0x5a,0x11);
    }
  }
  if (*(char *)(iVar1 + 0x1d) != '\0') {
    local_18 = DAT_0800d084;
    FUN_08027b14(6,0x6e,0xc,0x11);
  }
  FUN_0800ced4(0);
  uVar3 = FUN_08015500();
  FUN_0800b8c4((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),local_18,0x2965);
  return;
}

