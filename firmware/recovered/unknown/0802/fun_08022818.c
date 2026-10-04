/**
 * @brief fun_08022818
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022818, Ghidra name FUN_08022818, 74 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022818(void)

{
  char *pcVar1;
  ushort uVar2;
  
  pcVar1 = DAT_08022868;
  if ((((*(char *)(DAT_08022864 + 0x26) == '\0') || (DAT_08022868[0x4c] == '\0')) ||
      (*DAT_08022868 == '\x01')) || (3 < (byte)DAT_08022868[0x14])) {
    return;
  }
  if (*(short *)(DAT_08022868 + 0x4e) == 0) {
    pcVar1[0x4e] = -0xc;
    pcVar1[0x4f] = '\x01';
  }
  uVar2 = *(ushort *)(pcVar1 + 0x4e) - 1;
  *(ushort *)(pcVar1 + 0x4e) = uVar2;
  if (uVar2 < 5) {
    FUN_08015824(1);
    return;
  }
  FUN_08015824(0);
  return;
}

