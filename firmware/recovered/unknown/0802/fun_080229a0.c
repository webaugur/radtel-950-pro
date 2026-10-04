/**
 * @brief fun_080229a0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080229a0, Ghidra name FUN_080229a0, 36 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080229a0(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  FUN_08020174();
  FUN_0801aca8();
  puVar1 = DAT_080229c4;
  *(undefined2 *)(DAT_080229c4 + 7) = 0x28;
  FUN_08022954();
  iVar2 = FUN_08008aa8();
  if (iVar2 != 0) {
    *puVar1 = 0;
  }
  return;
}

