/**
 * @brief fun_08047498
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08047498, Ghidra name FUN_08047498, 14 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_08047498(void)

{
  undefined4 uVar1;
  int extraout_r1;
  undefined4 uVar2;
  undefined4 *unaff_r6;
  undefined4 *puVar3;
  
  uVar1 = *unaff_r6;
  uVar2 = unaff_r6[2];
  puVar3 = (undefined4 *)unaff_r6[4];
  *puVar3 = unaff_r6[1];
  puVar3[1] = uVar2;
  func_0x07fe62e2(uVar1);
  *(undefined4 *)(extraout_r1 + 0x30) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

