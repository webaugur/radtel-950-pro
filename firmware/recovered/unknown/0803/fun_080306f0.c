/**
 * @brief fun_080306f0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080306f0, Ghidra name FUN_080306f0, 30 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_080306f0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 uVar3;
  undefined4 *puVar4;
  char in_NG;
  char in_OV;
  undefined4 *puVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  puVar4 = (undefined4 *)param_2[3];
  if (in_NG == in_OV) {
    *puVar4 = param_1;
    puVar4[1] = uVar2;
    puVar4[2] = param_4;
    puVar4[3] = unaff_r4;
    puVar4[4] = uVar3;
    puVar4[5] = &stack0x00000390;
    puVar4[6] = uVar1;
    puVar4[7] = uVar2;
    puVar4[8] = param_4;
    puVar4[9] = unaff_r4;
    puVar4[10] = uVar3;
    puVar4[0xb] = &stack0x00000390;
    puVar4[0xc] = param_1;
    puVar4[0xd] = uVar1;
    puVar4[0xe] = uVar2;
    puVar4[0xf] = param_4;
    puVar4[0x10] = unaff_r4;
    puVar4[0x11] = uVar3;
    puVar4[0x12] = &stack0x00000390;
    puVar5 = puVar4 + 0x13;
    *puVar5 = puVar5;
    puVar4[0x14] = &stack0x00000390;
    *puVar5 = param_1;
    puVar4[0x14] = puVar5;
    puVar4[0x15] = &stack0x00000390;
    *puVar5 = param_1;
    puVar4[0x14] = param_4;
    puVar4[0x15] = unaff_r4;
    puVar4[0x16] = uVar3;
    puVar4[0x17] = &stack0x00000390;
    puVar4[0x18] = uVar2;
    puVar4[0x19] = param_4;
    puVar4[0x1a] = unaff_r4;
    puVar4[0x1b] = uVar3;
    puVar4[0x1c] = &stack0x00000390;
    puVar4[0x1d] = param_1;
    puVar4[0x1e] = uVar1;
    puVar4[0x1f] = param_4;
    puVar4[0x20] = unaff_r4;
    puVar4[0x21] = uVar3;
    puVar4[0x22] = &stack0x00000390;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

