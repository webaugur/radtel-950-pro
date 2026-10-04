/**
 * @brief fun_080207ec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080207ec, Ghidra name FUN_080207ec, 304 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080207ec(undefined4 param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar1 = DAT_0802093c;
  uVar4 = DAT_08020938;
  uVar3 = DAT_08020934;
  pcVar2 = DAT_08020930;
  uVar5 = DAT_0802092c;
  switch(param_1) {
  default:
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    FUN_08012ae2(uVar3,0x10);
    FUN_08012ae2(uVar5,0x200);
    if (pcVar2[0x4b] == '\0') {
      FUN_08012ae2(uVar4,0x100);
    }
    return 0;
  case 1:
    *DAT_0802093c = '\x01';
    FUN_08012ae6(uVar3,0x10);
    FUN_08012ae6(uVar4,0x100);
    break;
  case 2:
    *DAT_0802093c = '\0';
    break;
  case 3:
    DAT_0802093c[1] = '\x01';
    FUN_08012ae6(uVar3,0x10);
    FUN_08012ae6(uVar4,0x100);
    break;
  case 4:
    DAT_0802093c[1] = '\0';
    break;
  case 5:
    if (((*(char *)(DAT_08020940 + 0x19) == '\0') || (*(char *)(DAT_08020940 + 0x1a) != '\0')) ||
       (*DAT_08020930 != '\x02')) {
      DAT_0802093c[2] = '\x01';
      FUN_08012ae6(uVar3,0x10);
      FUN_08012ae6(uVar4,0x100);
    }
    break;
  case 6:
    DAT_0802093c[2] = '\0';
    break;
  case 7:
    DAT_0802093c[3] = '\x01';
    FUN_08012ae6(uVar3,0x10);
    FUN_08012ae6(uVar4,0x100);
    break;
  case 8:
    DAT_0802093c[3] = '\0';
    break;
  case 9:
    DAT_0802093c[4] = '\x01';
    FUN_08012ae6(uVar3,0x10);
    FUN_08012ae6(uVar4,0x100);
    break;
  case 10:
    DAT_0802093c[4] = '\0';
    break;
  case 0xb:
    DAT_0802093c[5] = '\x01';
    FUN_08012ae6(uVar3,0x10);
    FUN_08012ae6(uVar4,0x100);
    break;
  case 0xc:
    DAT_0802093c[5] = '\0';
    break;
  case 0xd:
    break;
  }
  if ((((*pcVar1 == '\0') && (pcVar1[1] == '\0')) &&
      ((pcVar1[2] == '\0' && ((pcVar1[3] == '\0' && (pcVar1[4] == '\0')))))) && (pcVar1[5] == '\0'))
  {
    FUN_08012ae2(uVar3,0x10);
    FUN_08012ae2(uVar5,0x200);
    if (pcVar2[0x4b] == '\0') {
      FUN_08012ae2(uVar4,0x100);
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

