/**
 * @brief fun_08033db0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08033db0, Ghidra name FUN_08033db0, 168 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08033db0(void)

{
  undefined2 *puVar1;
  int in_r3;
  int unaff_r7;
  
  puVar1 = (undefined2 *)(unaff_r7 * 0x200);
  *puVar1 = (short)puVar1;
  *(undefined1 *)(in_r3 + (int)puVar1) = 0;
  *(undefined2 *)(in_r3 << 2) = (short)(undefined2 *)(in_r3 << 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

