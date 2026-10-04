/**
 * @brief fun_0802b6a6
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802b6a6, Ghidra name FUN_0802b6a6, 40 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802b6a6(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 unaff_r6;
  bool in_ZR;
  bool in_CY;
  
  if (in_CY && !in_ZR) {
    *(undefined4 *)(param_3 + 0x20) = unaff_r6;
    software_interrupt(0x6c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

