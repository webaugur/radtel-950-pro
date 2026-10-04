/**
 * @brief fun_08010810
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08010810, Ghidra name FUN_08010810, 54 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08010810(void)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_08010848;
  if (DAT_08010848[1] == '\x01') {
    *(undefined2 *)(DAT_08010848 + 2) = 0x208;
  }
  else if (DAT_08010848[1] == '\x02') {
    *(undefined2 *)(DAT_08010848 + 2) = 0x8fc;
  }
  else {
    *(undefined2 *)(DAT_08010848 + 2) = 0x99;
  }
  *puVar1 = 2;
  *(undefined2 *)(puVar1 + 4) = 10;
  FUN_0801232c();
  FUN_0800eec0();
  return;
}

