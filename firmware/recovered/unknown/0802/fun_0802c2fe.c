/**
 * @brief fun_0802c2fe
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802c2fe, Ghidra name FUN_0802c2fe, 44 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_0802c2fe(undefined4 param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r6;
  char in_NG;
  char in_OV;
  
  uVar1 = (uint)*(ushort *)(unaff_r4 + 0x22);
  *(short *)(param_3 + uVar1) = (short)unaff_r6;
  iVar2 = param_3;
  do {
    if (in_NG != in_OV) {
      return CONCAT44(param_3,param_1);
    }
    iVar3 = *(int *)(unaff_r6 + 0x38);
    *(int *)(iVar2 + unaff_r4) = unaff_r6 >> 0x13;
    *(short *)(uVar1 + 0x20) = (short)param_2;
    in_OV = SBORROW4(iVar2,99);
    uVar1 = iVar3 >> 0xe;
    in_NG = (int)uVar1 < 0;
    param_2 = &stack0x00000344;
    unaff_r6 = (int)(short)((short)iVar2 + -99);
    iVar2 = (int)*(short *)(iVar3 + unaff_r4);
  } while ((iVar3 >> 0xd & 1U) == 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

