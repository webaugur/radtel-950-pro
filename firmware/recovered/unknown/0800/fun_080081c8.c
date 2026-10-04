/**
 * @brief fun_080081c8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080081c8, Ghidra name FUN_080081c8, 70 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080081c8(void)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = DAT_08008210;
  DAT_08008210[4] = 0;
  if (*piVar1 != 0) {
    *piVar1 = *piVar1 + -1;
  }
  uVar2 = (piVar1[1] + 1U) % 10;
  piVar1[1] = uVar2;
  if ((uVar2 == 0) && (uVar2 = (piVar1[2] + 1U) % 10, piVar1[2] = uVar2, uVar2 == 0)) {
    piVar1[3] = (piVar1[3] + 1U) % 10;
  }
  return;
}

