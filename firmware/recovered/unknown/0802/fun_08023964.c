/**
 * @brief fun_08023964
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08023964, Ghidra name FUN_08023964, 48 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08023964(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_08023994;
  if (*(short *)(DAT_08023994 + 2) == 0) {
    if (DAT_08023994[1] == '\x01') {
      FUN_08023790(1);
    }
    else {
      FUN_08023754(1);
    }
    FUN_0801b3f0();
    FUN_0801b3fc();
    *puVar1 = 1;
    *(undefined2 *)(puVar1 + 2) = 2;
  }
  return;
}

