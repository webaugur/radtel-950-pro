/**
 * @brief fun_080489b6
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080489b6, Ghidra name FUN_080489b6, 10 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_080489b6(void)

{
  undefined4 uVar1;
  int unaff_r6;
  undefined4 *puVar2;
  
  uVar1 = *(undefined4 *)(unaff_r6 + 8);
  puVar2 = *(undefined4 **)(unaff_r6 + 0x10);
  *puVar2 = *(undefined4 *)(unaff_r6 + 4);
  puVar2[1] = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

