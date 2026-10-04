/**
 * @brief fun_08031056
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08031056, Ghidra name FUN_08031056, 4 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08031056(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xe8,0x8031058);
  (*pcVar1)();
}

