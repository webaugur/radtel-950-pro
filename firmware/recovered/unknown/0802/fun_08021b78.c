/**
 * @brief fun_08021b78
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021b78, Ghidra name FUN_08021b78, 128 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08021b78(int param_1)

{
  byte bVar1;
  int iVar2;
  
  FUN_0800da50();
  FUN_0801b334();
  iVar2 = DAT_08021bf8;
  if (*(char *)(DAT_08021bf8 + 0xfa) == '\x02') {
    *(undefined1 *)(DAT_08021bf8 + 0xfa) = 0;
  }
  else if (*(char *)(DAT_08021bf8 + 0xfa) == '\x01') {
    *(undefined1 *)(DAT_08021bf8 + 0xfa) = 2;
  }
  else {
    *(undefined1 *)(DAT_08021bf8 + 0xfa) = 1;
  }
  bVar1 = *(byte *)(iVar2 + 0xfa);
  *(byte *)(DAT_08021bfc + 0x18) = bVar1;
  *(undefined2 *)(iVar2 + 0x108) = *(undefined2 *)(iVar2 + (uint)bVar1 * 2 + 0x102);
  FUN_080089e8();
  if (param_1 != 0) {
    FUN_08010044();
  }
  iVar2 = DAT_08021c00;
  if ((*(char *)(DAT_08021c00 + 1) != '\x0f') && (*(char *)(DAT_08021c00 + 1) != '\x14')) {
    if (*(char *)(DAT_08021c00 + 0x1e) == '\0') {
      FUN_0800c504();
    }
    else {
      FUN_0800b604(0);
      if (*(char *)(iVar2 + 0x4a) == -0x5b) {
        FUN_0800ca18();
      }
    }
  }
  FUN_0801c9a0();
  return;
}

