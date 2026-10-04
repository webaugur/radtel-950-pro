/**
 * @brief fun_0801b8d0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b8d0, Ghidra name FUN_0801b8d0, 52 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b8d0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = DAT_0801b90c;
  uVar3 = *DAT_0801b904 & 0x3f;
  if (*(char *)(DAT_0801b908 + 0x12) != '\x02') {
    if (*(char *)(DAT_0801b908 + 0x12) == '\x01') {
      uVar3 = 0x2d;
    }
    else {
      uVar3 = 0x24;
    }
  }
  uVar2 = (**(code **)(DAT_0801b90c + 4))(0x7d);
                    /* WARNING: Could not recover jumptable at 0x0801b8fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 8))(0x7d,uVar2 & 0xffffffe0 | uVar3);
  return;
}

