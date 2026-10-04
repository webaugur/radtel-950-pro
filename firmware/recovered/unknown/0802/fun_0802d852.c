/**
 * @brief fun_0802d852
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802d852, Ghidra name FUN_0802d852, 66 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0802d852(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_r5;
  int *unaff_r6;
  int iVar6;
  int unaff_r7;
  undefined4 unaff_r10;
  undefined4 in_cr5;
  undefined4 in_cr6;
  
  piVar2 = (int *)*unaff_r6;
  iVar6 = unaff_r6[2];
  *(int *)(param_2 + 0x20) = param_4;
  iVar3 = *piVar2;
  iVar4 = piVar2[1];
  iVar5 = piVar2[2];
  *(int *)(param_4 + 0x6c) = iVar3;
  coprocessor_function2(6,1,0,in_cr6,in_cr5,in_cr5);
  piVar2 = (int *)(iVar3 >> 9);
  *(char *)(iVar4 + 0x18) = (char)iVar6;
  *(short *)(piVar2 + 5) = (short)iVar6;
  *piVar2 = iVar3;
  piVar2[1] = iVar4;
  piVar2[2] = iVar5;
  piVar2[3] = unaff_r5;
  piVar2[4] = unaff_r7 + -0x8e;
  *(short *)(iVar6 + 0x32) = (short)iVar3;
  *(undefined4 *)(iVar4 + -0x3c) = unaff_r10;
  *(undefined4 *)(iVar4 + -0x38) = *(undefined4 *)(iVar4 + 0x10);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0x16,0x802cd44);
  (*pcVar1)();
}

