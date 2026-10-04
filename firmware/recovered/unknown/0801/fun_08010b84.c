/**
 * @brief fun_08010b84
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08010b84, Ghidra name FUN_08010b84, 142 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08010b84(void)

{
  short sVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  pcVar3 = DAT_08010c18;
  pcVar2 = DAT_08010c14;
  if (*DAT_08010c14 != '\x01') {
    if ((DAT_08010c18[1] == '\x02') && (*(short *)(DAT_08010c14 + 4) != 0)) {
      *(short *)(DAT_08010c14 + 4) = *(short *)(DAT_08010c14 + 4) + -1;
    }
    return;
  }
  if ((((*DAT_08010c18 == '\0') && ((byte)DAT_08010c18[0x14] < 4)) && (DAT_08010c18[1] == '\0')) &&
     (iVar6 = FUN_08008aa8(), iVar6 == 0)) {
    sVar1 = *(short *)(pcVar2 + 4);
    if ((sVar1 != 0) && (*(short *)(pcVar2 + 4) = sVar1 + -1, sVar1 == 1)) {
      pcVar3[1] = '\x02';
      *pcVar2 = '\x02';
      FUN_0801b70c(1);
      uVar5 = DAT_08010c24;
      uVar4 = DAT_08010c20;
      if (*(char *)(DAT_08010c1c + 0x43) == '\0') {
        FUN_08012ae2(DAT_08010c20,0x80);
        FUN_08012ae2(uVar5,0x20);
      }
      else {
        FUN_08012ae6(DAT_08010c24,0x20);
        FUN_08012ae6(uVar4,0x80);
      }
      FUN_0800da50();
      FUN_08010fa0();
      return;
    }
  }
  else {
    pcVar2[4] = -0x38;
    pcVar2[5] = '\0';
  }
  return;
}

