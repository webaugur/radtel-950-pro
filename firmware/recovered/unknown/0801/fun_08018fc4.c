/**
 * @brief fun_08018fc4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08018fc4, Ghidra name FUN_08018fc4, 26 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08018fc4(void)

{
  DataSynchronizationBarrier(0xf);
  *DAT_08018fe0 = *DAT_08018fe0 & 0x700 | DAT_08018fe4;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

