/**
 * @brief fun_0802b912
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802b912, Ghidra name FUN_0802b912, 34 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802b912(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined4 unaff_r4;
  undefined4 *unaff_r5;
  int unaff_r6;
  undefined8 in_d6;
  undefined8 in_d21;
  
  *(short *)(param_1 + (int)unaff_r5) = (short)unaff_r4;
  bVar1 = *(byte *)(unaff_r6 + 0x1e);
  uVar2 = *(ushort *)(param_1 + 0x28);
  *(short *)((param_3 >> 0x10) + param_4) = (short)param_4;
  *unaff_r5 = unaff_r4;
  VectorAdd(in_d6,in_d21,2);
  *(ushort *)((uint)uVar2 + (uint)bVar1) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

