/**
 * @brief fun_0801b350
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b350, Ghidra name FUN_0801b350, 38 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b350(void)

{
  int iVar1;
  
  iVar1 = DAT_0801b378;
  if (*(char *)(DAT_0801b378 + 0x22) == '\x01') {
    FUN_0801ac82(0);
  }
  *(undefined2 *)(iVar1 + 0x24) = 1000;
  *(undefined1 *)(iVar1 + 0x22) = 0;
  *(undefined2 *)(iVar1 + 0x26) = 18000;
  return;
}

