/**
 * @brief fun_0803449a
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0803449a, Ghidra name FUN_0803449a, 98 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080344ea) */

void FUN_0803449a(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int unaff_r7;
  undefined4 in_cr0;
  
  bVar1 = *(byte *)(param_2 + 0x14);
  *(undefined4 *)(param_2 << 4) = param_4;
  uVar2 = (uint)bVar1;
  if (-1 < unaff_r7 << 0x19) {
    uVar2 = param_2;
  }
  coprocessor_store(8,in_cr0,uVar2);
  coprocessor_load(8,in_cr0,uVar2 + 0x14);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

