/**
 * @brief fun_0800a1c4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800a1c4, Ghidra name FUN_0800a1c4, 428 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800a1c4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  if (param_1 == 1) {
    FUN_080152cc(0,0x1d,0x2965,param_4);
    return;
  }
  cVar1 = *(char *)(DAT_0800a370 + 0xfa);
  if (param_1 == 2) {
    if (cVar1 == '\x01') {
      FUN_080152cc(0x1c,0x59,0);
      FUN_080152cc(0x75,0x59,0x105);
      FUN_080152cc(0xce,0x59,0);
    }
    else if (cVar1 == '\x02') {
      FUN_080152cc(0x1c,0x59,0);
      FUN_080152cc(0x75,0x59,0);
      FUN_080152cc(0xce,0x59,0x105);
    }
    else {
      FUN_080152cc(0x1c,0x59,0x105);
      FUN_080152cc(0x75,0x59,0);
      FUN_080152cc(0xce,0x59,0);
    }
    FUN_0801537c(0,0x74,0xf0,0xffff);
    FUN_0801537c(0,0xcd,0xf0,0xffff);
    return;
  }
  if (param_1 == 7) {
    FUN_080152cc(0x1c,0x59,0x105,param_4);
    return;
  }
  if (param_1 == 3) {
    FUN_080152cc(0x126,0x1b,0x2965,param_4);
    return;
  }
  if (param_1 == 4) {
    FUN_080152cc(0x76,0xb0,0,param_4);
    return;
  }
  if (param_1 == 5) {
    FUN_080152cc(0x1c,0x10b,0,param_4);
    return;
  }
  if (param_1 == 6) {
    FUN_080152cc(0x1c,0x10b,0,param_4);
    return;
  }
  if (param_1 != 8) {
    if (param_1 != 9) {
      FUN_080152cc(0,0x1d,0x2965);
      FUN_080152cc(0x1c,0x10b,0);
      FUN_080152cc(0x126,0x1b,0x2965,param_4);
      return;
    }
    FUN_080152cc(0x19,0x127,0);
    FUN_0801cb30(6,0x19,0xe9,0x138,0x197);
    return;
  }
  if (cVar1 == '\x01') {
    FUN_080152cc(0x1c,0x59,0);
    FUN_080152cc(0x75,0x59,0x105,param_4);
    return;
  }
  if (cVar1 != '\x02') {
    FUN_080152cc(0x1c,0x59,0x105);
    FUN_080152cc(0xce,0x59,0,param_4);
    return;
  }
  FUN_080152cc(0x75,0x59,0);
  FUN_080152cc(0xce,0x59,0x105,param_4);
  return;
}

