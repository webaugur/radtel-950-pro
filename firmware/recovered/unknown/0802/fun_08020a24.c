/**
 * @brief fun_08020a24
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020a24, Ghidra name FUN_08020a24, 22 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08020a24(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_08020a3c;
  uVar2 = 0;
  do {
    *(undefined4 *)(iVar1 + uVar2 * 4 + 0x18) = 0;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 10);
  return;
}

