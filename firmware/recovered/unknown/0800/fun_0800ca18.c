/**
 * @brief fun_0800ca18
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ca18, Ghidra name FUN_0800ca18, 296 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ca18(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  FUN_080154a4(0,0xf0,0x126,0x140,1);
  if (*(char *)(DAT_0800cb40 + 8) == '\0') {
    FUN_08027b14(299,8,0x25,0xf,DAT_0800cb48);
  }
  else {
    FUN_08027b14(299,8,0x25,0xf,DAT_0800cb44);
  }
  if (*DAT_0800cb4c == '\x01') {
    FUN_08027b14(299,0x3a,0x31,0xf,DAT_0800cb68);
  }
  else {
    FUN_08027b14(299,0x3a,0x31,0xf,DAT_0800cb50);
  }
  FUN_08027b14(299,0x78,0x19,0xf,DAT_0800cb54);
  uVar3 = DAT_0800cb5c;
  if (((((*(char *)(DAT_0800cb58 + 4) == '\0') ||
        (cVar1 = *(char *)(DAT_0800cb60 + 1), cVar1 == '\x01')) || (cVar1 == '\x02')) ||
      ((cVar1 == '\v' || (cVar1 == '\a')))) ||
     ((cVar1 == '\x11' || ((cVar1 == '\x03' || (cVar1 == '\x15')))))) {
    if (*(char *)(DAT_0800cb60 + 0x4a) == -0x5b) {
      FUN_08027b14(299,0x9e,0x1b,0xf);
    }
    else {
      uVar3 = DAT_0800cb74;
      FUN_08027b14(299,0x9e,0x1b,0xf);
    }
  }
  else if (*(char *)(DAT_0800cb60 + 0x4a) == -0x5b) {
    if (*(char *)(DAT_0800cb6c + 0xfa) == '\x02') {
      FUN_08027b14(299,0x9e,0x1b,0xf);
    }
    else {
      uVar3 = DAT_0800cb70;
      FUN_08027b14(299,0x9e,0x1b,0xf);
    }
  }
  else {
    uVar3 = DAT_0800cb64;
    FUN_08027b14(299,0x9e,0x1b,0xf);
  }
  uVar2 = FUN_0800cf58(0);
  FUN_08015500((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),uVar3,0x2965);
  return;
}

