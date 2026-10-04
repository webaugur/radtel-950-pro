/**
 * @brief fun_080215ec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080215ec, Ghidra name FUN_080215ec, 30 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080215ec(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_0802160c;
  uVar2 = 0;
  do {
    *(undefined4 *)(iVar1 + (uVar2 + 1) * 4 + 0x18) = *(undefined4 *)(iVar1 + uVar2 * 4 + 0x18);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 9);
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  return;
}

