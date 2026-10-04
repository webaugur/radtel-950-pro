/**
 * @brief fun_0801c448
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801c448, Ghidra name FUN_0801c448, 120 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801c448(undefined4 param_1,int param_2,uint param_3,undefined1 param_4,undefined1 param_5,
                 undefined1 param_6,undefined1 param_7,undefined1 param_8,int param_9)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0801c4cc;
  if (((param_9 == 0) && (*DAT_0801c4c0 != '\0')) &&
     (*(char *)(DAT_0801c4c4 + 0xfa) == DAT_0801c4c0[0x1c])) {
    param_2 = 0;
  }
  if (((param_3 < 0xfb) && (param_3 != 0)) && ((~param_3 & 0xa0000000) != 0)) {
    if (param_2 == 3) {
      param_3 = (uint)*(ushort *)(DAT_0801c4c8 + (param_3 - 0x6a) * 2);
    }
    else {
      param_3 = (uint)*(ushort *)(DAT_0801c4c8 + (param_3 - 1) * 2);
    }
  }
  if (param_9 == 0) {
    *DAT_0801c4cc = param_1;
    *(char *)(puVar1 + 2) = (char)param_2;
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 6) = param_7;
  }
  else {
    DAT_0801c4cc[3] = param_1;
    *(char *)(puVar1 + 5) = (char)param_2;
    puVar1[4] = param_3;
    *(undefined1 *)((int)puVar1 + 0x19) = param_7;
  }
  *(undefined1 *)((int)puVar1 + 0x15) = param_4;
  *(undefined1 *)((int)puVar1 + 0x16) = param_5;
  *(undefined1 *)((int)puVar1 + 0x17) = param_6;
  *(undefined1 *)((int)puVar1 + 0x1a) = param_8;
  return;
}

