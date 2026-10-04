/**
 * @brief fun_080220ec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080220ec, Ghidra name FUN_080220ec, 22 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080220ec(int param_1,uint param_2,int param_3)

{
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & ~(ushort)(1 << (param_2 & 0xff));
  *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | (ushort)(param_3 << (param_2 & 0xff));
  return;
}

