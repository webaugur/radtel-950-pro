/**
 * @brief fun_08011244
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08011244, Ghidra name FUN_08011244, 888 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08011244(int param_1,uint param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_34 [12];
  undefined4 local_28;
  
  local_28 = 0xaf;
  if (param_1 == 0) {
    FUN_080154a4(0x35,0x3f,0x49,99,1,0);
    FUN_08027b14(0x49,0x35,10,0x1a,DAT_080115bc);
    FUN_08015500();
  }
  FUN_080154a4(0,0xf0,0xaf,0xd7,1,0);
  uVar2 = DAT_080115c0;
  FUN_08027b14(0xb0,0xc,0x27,0xc,DAT_080115c0);
  FUN_0801cbe8(0x3c,local_28,0xd3,0xffff,1);
  FUN_08027b14(0xb0,0x4b,0x19,0xc,DAT_080115c4);
  FUN_0801cbe8(0x72,local_28,0xd3,0xffff,1);
  FUN_08027b14(0xb0,0x7e,0x21,0xc,DAT_080115c8);
  FUN_0801cbe8(0xa8,local_28,0xd3,0xffff,1);
  FUN_08027b14(0xb0,0xbd,0x1e,0xc,DAT_080115cc);
  iVar4 = DAT_080115d4;
  iVar3 = DAT_080115d0;
  if (param_1 == 1) {
    if ((int)param_2 < 0) {
      param_2 = 0;
    }
    if (*(char *)(DAT_080115d4 + 0x43) == '\x01') {
      if (4 < (int)param_2) {
        param_2 = 3;
      }
      *(char *)(DAT_080115d4 + 0x97) = (char)param_2;
    }
    else {
      if (4 < (int)param_2) {
        param_2 = 5;
      }
      *(char *)(DAT_080115d4 + 0x96) = (char)param_2;
    }
    FUN_08027b14(0xb0,0xc,0x27,0xc,*(undefined4 *)(iVar3 + 4));
  }
  else {
    FUN_08027b14(0xb0,0xc,0x27,0xc,uVar2);
  }
  if (*(char *)(iVar4 + 0x43) == '\0') {
    FUN_08014a70(0xc6,8,&DAT_080115f8,0);
  }
  else if (*(char *)(iVar4 + 0x43) == '\x01') {
    FUN_08000850(local_34,&DAT_080115d8,
                 *(undefined4 *)(DAT_080115d0 + 0x44 + ((uint)*(byte *)(iVar4 + 0x97) % 5) * 4));
    FUN_08014a70(0xc6,8,local_34,0);
  }
  else {
    FUN_08000850(local_34,&DAT_080115d8,
                 *(undefined4 *)(DAT_080115d0 + 0x14 + ((uint)*(byte *)(iVar4 + 0x96) % 6) * 4));
    FUN_08014a70(0xc6,8,local_34,0);
  }
  iVar5 = DAT_080115dc;
  uVar1 = (undefined1)param_2;
  if (param_1 == 2) {
    if (param_2 < 6) {
      *(undefined1 *)(DAT_080115dc + 0x16) = uVar1;
    }
    FUN_08027b14(0xb0,0x4b,0x19,0xc,*(undefined4 *)(iVar3 + 8));
  }
  else {
    FUN_0801cbe8(0x3c,local_28,0xd3,0xffff,1);
    FUN_08027b14(0xb0,0x4b,0x19,0xc,DAT_080115c4);
  }
  if (*(char *)(iVar4 + 0x43) == '\x01') {
    FUN_08014a70(0xc6,0x48,&DAT_08011600,0);
  }
  else if (*(char *)(iVar4 + 0x43) == '\0') {
    FUN_08014a70(0xc6,0x48,&DAT_080115f8,0);
  }
  else {
    FUN_08000850(local_34,&DAT_080115e0,
                 *(undefined4 *)(DAT_080115d0 + 0x2c + ((uint)*(byte *)(iVar5 + 0x16) % 6) * 4));
    FUN_08014a70(0xc6,0x48,local_34,0);
  }
  if (param_1 == 3) {
    if (param_2 < 0x25) {
      *(undefined1 *)(iVar5 + 0x17) = uVar1;
      if (*(char *)(iVar4 + 0x43) == '\x01') {
        *(undefined1 *)(iVar4 + 0x44) = uVar1;
      }
      else {
        *(undefined1 *)(iVar4 + 0x98) = uVar1;
      }
    }
    FUN_08027b14(0xb0,0x7e,0x21,0xc,*(undefined4 *)(iVar3 + 0xc));
  }
  else {
    FUN_0801cbe8(0x72,local_28,0xd3,0xffff,1);
    FUN_08027b14(0xb0,0x7e,0x21,0xc,DAT_080115c8);
  }
  if (*(char *)(iVar4 + 0x43) == '\0') {
    FUN_08027b14(0xc6,0x7d,0x21,0x11,DAT_080115e4);
  }
  else if (*(byte *)(iVar5 + 0x17) == 0) {
    FUN_08027b14(0xc6,0x7d,0x21,0x11,DAT_080115e4);
  }
  else {
    FUN_08000850(local_34,&DAT_080115e8,*(byte *)(iVar5 + 0x17) - 1);
    if (1 < *(byte *)(iVar5 + 0x17)) {
      local_34[0] = 0x2d;
    }
    FUN_08014a70(0xc6,0x7d,local_34,0);
  }
  if (param_1 == 4) {
    if (param_2 + 0x7ff8 < 0xea61) {
      *(short *)(iVar5 + 0x18) = (short)param_2;
    }
    FUN_08027b14(0xb0,0xbd,0x1e,0xc,*(undefined4 *)(iVar3 + 0x10));
  }
  else {
    FUN_0801cbe8(0xa8,local_28,0xd3,0xffff,1);
    FUN_08027b14(0xb0,0xbd,0x1e,0xc,DAT_080115cc);
  }
  if (*(byte *)(iVar4 + 0x43) < 2) {
    FUN_08014a70(0xc6,0xb2,s__08011604,0);
  }
  else {
    FUN_08000850(local_34,&DAT_080115f0,(int)*(short *)(iVar5 + 0x18));
    if (*(short *)(iVar5 + 0x18) < 0) {
      local_34[0] = 0x2d;
    }
    else {
      local_34[0] = 0x2b;
    }
    FUN_08014a70(0xc6,0xb2,local_34,0);
  }
  FUN_08015500();
  if (param_1 != 0) {
    FUN_080154a4(0x35,0x3f,0x49,99,1,0);
    FUN_08015500();
  }
  return;
}

