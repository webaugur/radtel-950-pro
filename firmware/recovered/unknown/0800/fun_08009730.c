/**
 * @brief fun_08009730
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08009730, Ghidra name FUN_08009730, 106 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08009730(void)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = DAT_080097a0;
  uVar2 = *DAT_0800979c;
  *DAT_080097a0 = uVar2;
  uVar4 = DAT_0800979c[1];
  puVar1[1] = uVar4;
  uVar5 = DAT_0800979c[2];
  puVar1[2] = uVar5;
  if (((*DAT_080097a4 == (uVar2 ^ uVar4)) && (DAT_080097a4[1] == (uVar4 ^ uVar5))) &&
     (DAT_080097a4[2] == (uVar5 ^ uVar2))) {
    *DAT_080097a8 = 1;
    uVar3 = 1;
  }
  else {
    *DAT_080097a8 = 0;
    uVar3 = 0;
  }
  return uVar3;
}

