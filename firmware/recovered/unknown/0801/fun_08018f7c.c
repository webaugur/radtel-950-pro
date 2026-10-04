/**
 * @brief fun_08018f7c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08018f7c, Ghidra name FUN_08018f7c, 26 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08018f7c(void)

{
  DataSynchronizationBarrier(0xf);
  *DAT_08018f98 = *DAT_08018f98 & 0x700 | DAT_08018f9c;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

