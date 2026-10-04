/**
 * @brief fun_08016498
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08016498, Ghidra name FUN_08016498, 38 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08016498(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_080164c4;
  if (0 < *(short *)(DAT_080164c0 + 0xf)) {
    uVar2 = FUN_08000850(DAT_080164c4 + 0x12,&DAT_080164c8);
    *(undefined4 *)(iVar1 + 4) = uVar2;
    return;
  }
  uVar2 = FUN_08000850(DAT_080164c4 + 0x12,&DAT_080164cc);
  *(undefined4 *)(iVar1 + 4) = uVar2;
  return;
}

