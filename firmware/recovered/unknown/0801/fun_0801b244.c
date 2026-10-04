/**
 * @brief fun_0801b244
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801b244, Ghidra name FUN_0801b244, 96 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801b244(int param_1)

{
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = DAT_0801b2a4;
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar2 == 0x11) {
    if (*DAT_0801b2a4 != '\x03') {
      FUN_080073a4(7);
      return;
    }
    FUN_0801e498();
    FUN_0800ea60(1);
    FUN_08023510(0x47,6);
    return;
  }
  if (uVar2 != 0x12) {
    if ((uVar2 == 0x13) || (uVar2 == 0x15)) {
      FUN_0801a4f0(0);
      *pcVar1 = '\x01';
    }
    else if (uVar2 < 0xa0) {
      FUN_080073a4(0);
      return;
    }
    return;
  }
  FUN_0800ea60(1);
  return;
}

