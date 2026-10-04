/**
 * @brief fun_08010d40
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08010d40, Ghidra name FUN_08010d40, 176 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08010d40(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  iVar4 = DAT_08010dc0;
  cVar1 = *(char *)(DAT_08010dc0 + 0x1d);
  sVar2 = *(short *)(DAT_08010dc0 + 0x1e);
  sVar3 = sVar2 + -1;
  if (cVar1 == '\x01') {
    if (*(char *)(DAT_08010dc4 + 0x43) == '\x01') {
      if (sVar2 == 0) {
        *(undefined2 *)(DAT_08010dc0 + 0x1e) = 4;
      }
      else {
        *(short *)(DAT_08010dc0 + 0x1e) = sVar3;
      }
      goto LAB_08010dae;
    }
  }
  else if (cVar1 != '\x02') {
    if (cVar1 == '\x03') {
      if (sVar2 < 1) {
        *(undefined2 *)(DAT_08010dc0 + 0x1e) = 0x24;
      }
      else {
        *(short *)(DAT_08010dc0 + 0x1e) = sVar3;
      }
    }
    else if (cVar1 == '\x04') {
      *(short *)(DAT_08010dc0 + 0x1e) = sVar2 + -10;
      if (60000 < (int)(short)(sVar2 + -10) + 0x7ff8U) {
        *(undefined2 *)(iVar4 + 0x1e) = 0x8008;
      }
    }
    goto LAB_08010dae;
  }
  if (sVar2 < 1) {
    *(undefined2 *)(DAT_08010dc0 + 0x1e) = 5;
  }
  else {
    *(short *)(DAT_08010dc0 + 0x1e) = sVar3;
  }
LAB_08010dae:
  FUN_08011244(cVar1,(int)*(short *)(iVar4 + 0x1e));
  cVar1 = *(char *)(DAT_08012554 + 0x1d);
  if (cVar1 == '\x02') {
    FUN_0800ef68();
  }
  else if (cVar1 == '\x03') {
    FUN_0800efd0();
  }
  else if (cVar1 == '\x04') {
    FUN_08027734((int)*(short *)(DAT_08012554 + 0x18));
  }
  FUN_080207ec(0xb);
  return;
}

