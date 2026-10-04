/**
 * @brief fun_0801c3b0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c3b0, Ghidra name FUN_0801c3b0, 72 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801c3b0(uint param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = DAT_0801c414;
  (**(code **)(DAT_0801c414 + 8))(0x47,*(ushort *)(DAT_0801c410 + (param_1 & 0xf) * 2) | 0x6042);
  if ((param_1 != 3) && (param_1 != 0xf1)) {
    if (*(char *)(iVar2 + 0x21) == '\0') {
      bVar1 = *(byte *)(DAT_0801c418 + 3);
    }
    else {
      bVar1 = *(byte *)(DAT_0801c418 + 4);
    }
                    /* WARNING: Could not recover jumptable at 0x0801c3f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 8))(0x48,(bVar1 & 0x3f) << 4 | 0xb00f);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0801c404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 8))(0x48,0xb0a3);
  return;
}

