/**
 * @brief fun_08021d40
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021d40, Ghidra name FUN_08021d40, 76 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08021d40(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = DAT_08021d8c;
  puVar1 = DAT_08021d88;
  if (param_1 == 0) {
    FUN_0800da50();
    puVar1[100] = *(undefined1 *)(iVar2 + 0xfa);
    *(undefined1 *)(iVar2 + 0xfa) = puVar1[0x33];
    FUN_080089e8();
  }
  else {
    *(undefined1 *)(DAT_08021d8c + 0xfa) = DAT_08021d88[100];
    FUN_0800d944();
    *puVar1 = 0;
  }
  FUN_0800cfc0();
  if (param_2 != 0) {
    FUN_0800b604(0);
    return;
  }
  return;
}

