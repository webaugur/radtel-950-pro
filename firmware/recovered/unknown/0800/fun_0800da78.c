/**
 * @brief fun_0800da78
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800da78, Ghidra name FUN_0800da78, 30 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800da78(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = FUN_08008aa8();
  if ((iVar2 == 0) && (iVar2 = FUN_0800923c(), puVar1 = DAT_0800da98, iVar2 == 1)) {
    *DAT_0800da98 = 1;
    puVar1[2] = 0;
  }
  return;
}

