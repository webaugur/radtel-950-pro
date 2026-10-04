/**
 * @brief fun_0801e940
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801e940, Ghidra name FUN_0801e940, 30 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801e940(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_0801e960;
  if (DAT_0801e960[4] == '\0') {
    *(undefined2 *)(DAT_0801e960 + 6) =
         *(undefined2 *)(DAT_0801e964 + *(int *)(DAT_0801e960 + 8) * 2);
  }
  else {
    *(short *)(DAT_0801e960 + 6) = (short)*(int *)(DAT_0801e960 + 8);
  }
  *puVar1 = 4;
  return;
}

