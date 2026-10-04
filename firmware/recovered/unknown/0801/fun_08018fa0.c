/**
 * @brief fun_08018fa0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08018fa0, Ghidra name FUN_08018fa0, 26 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08018fa0(void)

{
  DataSynchronizationBarrier(0xf);
  *DAT_08018fbc = *DAT_08018fbc & 0x700 | DAT_08018fc0;
  DataSynchronizationBarrier(0xf);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

