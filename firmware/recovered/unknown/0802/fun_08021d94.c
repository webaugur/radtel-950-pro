/**
 * @brief fun_08021d94
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08021d94, Ghidra name FUN_08021d94, 54 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08021d94(void)

{
  _DAT_e000e014 = *DAT_08021dcc / 1000 - 1;
  if (_DAT_e000e014 < 0x1000000) {
    *DAT_08021dd0 = 0xf0;
    _DAT_e000e018 = 0;
    _DAT_e000e010 = 7;
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

