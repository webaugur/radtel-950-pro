/**
 * @brief fun_0802ad90
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802ad90, Ghidra name FUN_0802ad90, 28 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0802ad90(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 in_cr9;
  undefined4 in_stack_000003ec;
  int in_stack_000003f0;
  undefined4 *in_stack_000003f8;
  
  coprocessor_load(3,in_cr9,unaff_r6 + -0x338);
  bVar1 = *(byte *)(unaff_r4 + 8);
  *(byte *)(param_3 + 0x10) = bVar1;
  *(uint *)(unaff_r5 + 8) = (uint)bVar1;
  *(ushort *)(in_stack_000003f0 + 0x10) = (ushort)bVar1;
                    /* WARNING: Could not recover jumptable at 0x0802ada8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)in_stack_000003f8[8])
            (*in_stack_000003f8,in_stack_000003ec,in_stack_000003f8[1],in_stack_000003f8[2]);
  return;
}

