/**
 * @brief fun_08048f30
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08048f30, Ghidra name FUN_08048f30, 16 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08048f30(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_r6;
  undefined4 *puVar3;
  
  uVar2 = *(undefined4 *)(unaff_r6 + 8);
  puVar3 = *(undefined4 **)(unaff_r6 + 0x10);
  *puVar3 = *(undefined4 *)(unaff_r6 + 4);
  puVar3[1] = uVar2;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfb,0x8048d78);
  (*pcVar1)();
}

