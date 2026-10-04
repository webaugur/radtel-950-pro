/**
 * @brief fun_08022a68
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022a68, Ghidra name FUN_08022a68, 36 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022a68(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  uVar1 = DAT_08022a8c;
  iVar3 = FUN_08022af4(DAT_08022a8c,0x525);
  if (iVar3 != 0) {
    uVar2 = FUN_08022c9c(uVar1);
    FUN_080098ec(uVar2);
    return;
  }
  return;
}

