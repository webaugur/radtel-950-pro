/**
 * @brief fun_08015e00
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08015e00, Ghidra name FUN_08015e00, 38 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08015e00(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_08015e2c;
  if (0 < *(short *)(DAT_08015e28 + 0x18)) {
    uVar2 = FUN_08000850(DAT_08015e2c + 0x12,&DAT_08015e30);
    *(undefined4 *)(iVar1 + 4) = uVar2;
    return;
  }
  uVar2 = FUN_08000850(DAT_08015e2c + 0x12,&LAB_08015e34);
  *(undefined4 *)(iVar1 + 4) = uVar2;
  return;
}

