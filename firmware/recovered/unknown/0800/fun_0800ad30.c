/**
 * @brief fun_0800ad30
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ad30, Ghidra name FUN_0800ad30, 28 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ad30(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = DAT_0800ad4c;
  *DAT_0800ad4c = (char)param_1;
  if (param_1 != 0) {
    *(undefined4 *)(puVar1 + 4) = DAT_0800ad50;
    *(undefined4 *)(puVar1 + 8) = DAT_0800ad54;
    return;
  }
  *(undefined4 *)(puVar1 + 4) = DAT_0800ad58;
  *(undefined4 *)(puVar1 + 8) = DAT_0800ad5c;
  return;
}

