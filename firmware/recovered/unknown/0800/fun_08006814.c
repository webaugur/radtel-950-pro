/**
 * @brief fun_08006814
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08006814, Ghidra name FUN_08006814, 20 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08006814(void)

{
  if (*(char *)(DAT_08006828 + 0xf) != '\x01') {
    return 0;
  }
  *(undefined1 *)(DAT_08006828 + 0xf) = 2;
  return 1;
}

