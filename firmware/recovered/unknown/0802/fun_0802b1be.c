/**
 * @brief fun_0802b1be
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0802b1be, Ghidra name FUN_0802b1be, 260 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0802b09a) */
/* WARNING: Removing unreachable block (ram,0x0802b0a8) */
/* WARNING: Removing unreachable block (ram,0x0802b0ac) */
/* WARNING: Removing unreachable block (ram,0x080ba7c4) */
/* WARNING: Removing unreachable block (ram,0x0802b1dc) */
/* WARNING: Removing unreachable block (ram,0x0802b12e) */
/* WARNING: Removing unreachable block (ram,0x0802b164) */
/* WARNING: Removing unreachable block (ram,0x0802b136) */
/* WARNING: Removing unreachable block (ram,0x0802b14a) */
/* WARNING: Removing unreachable block (ram,0x0802b108) */
/* WARNING: Removing unreachable block (ram,0x0802af94) */
/* WARNING: Removing unreachable block (ram,0x0802af98) */
/* WARNING: Removing unreachable block (ram,0x0802b022) */
/* WARNING: Removing unreachable block (ram,0x07f6409c) */
/* WARNING: Removing unreachable block (ram,0x0802b032) */
/* WARNING: Removing unreachable block (ram,0x0802b038) */
/* WARNING: Removing unreachable block (ram,0x0802b03a) */
/* WARNING: Removing unreachable block (ram,0x0802b03c) */
/* WARNING: Removing unreachable block (ram,0x0802b03e) */
/* WARNING: Removing unreachable block (ram,0x0802b040) */
/* WARNING: Removing unreachable block (ram,0x0802b064) */
/* WARNING: Removing unreachable block (ram,0x0802afac) */
/* WARNING: Removing unreachable block (ram,0x0802afba) */
/* WARNING: Removing unreachable block (ram,0x0802aec6) */
/* WARNING: Removing unreachable block (ram,0x0802aece) */
/* WARNING: Removing unreachable block (ram,0x0802aed4) */
/* WARNING: Removing unreachable block (ram,0x0802a8dc) */
/* WARNING: Removing unreachable block (ram,0x0802aee4) */
/* WARNING: Removing unreachable block (ram,0x0802af14) */
/* WARNING: Removing unreachable block (ram,0x0802b068) */
/* WARNING: Removing unreachable block (ram,0x0802b43c) */
/* WARNING: Removing unreachable block (ram,0x0802b354) */
/* WARNING: Removing unreachable block (ram,0x0802b156) */
/* WARNING: Removing unreachable block (ram,0x0802b120) */
/* WARNING: Removing unreachable block (ram,0x0802b194) */
/* WARNING: Removing unreachable block (ram,0x0802b12c) */
/* WARNING: Removing unreachable block (ram,0x0802aee6) */
/* WARNING: Removing unreachable block (ram,0x0802b460) */
/* WARNING: Removing unreachable block (ram,0x0802b462) */
/* WARNING: Removing unreachable block (ram,0x0802b464) */
/* WARNING: Removing unreachable block (ram,0x0802b470) */
/* WARNING: Removing unreachable block (ram,0x0802b442) */
/* WARNING: Removing unreachable block (ram,0x0802b4c2) */
/* WARNING: Removing unreachable block (ram,0x0802b4c4) */
/* WARNING: Removing unreachable block (ram,0x0802b484) */
/* WARNING: Removing unreachable block (ram,0x0802b3ae) */
/* WARNING: Removing unreachable block (ram,0x0802b4fc) */
/* WARNING: Removing unreachable block (ram,0x0802b448) */
/* WARNING: Removing unreachable block (ram,0x0802b45c) */
/* WARNING: Removing unreachable block (ram,0x0802b45e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802b1be(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int unaff_r7;
  
  if (unaff_r7 == 0xd5) {
    _DAT_000000d5 = param_2;
    _DAT_000000d9 = param_3;
    _DAT_000000dd = unaff_r4;
    param_2[4] = unaff_r4;
    uVar2 = DAT_0802b228;
    *param_2 = param_3;
    param_2[1] = uVar2;
    param_2[2] = unaff_r5;
    param_2[3] = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0x38,0x802b2ba);
  (*pcVar1)();
}

