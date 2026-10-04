/**
 * @brief fun_08003c60
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08003c60, Ghidra name FUN_08003c60, 78 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08003c60(undefined4 param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  
  puVar2 = DAT_08003cb0;
  *DAT_08003cb0 = 0x40;
  puVar2[2] = (char)((uint)param_1 >> 8);
  puVar2[3] = (char)param_1;
  puVar2[4] = 0;
  bVar1 = puVar2[-2];
  if (bVar1 < 2) {
    puVar2[1] = 0x40;
    puVar2[5] = 1;
  }
  else {
    if (bVar1 == 2) {
      puVar2[1] = 0x40;
    }
    else if (bVar1 == 3) {
      puVar2[1] = 0x80;
    }
    else {
      puVar2[1] = 0;
    }
    puVar2[5] = 1;
  }
  FUN_080277c6(6,DAT_08003cb0,0);
  FUN_0800ad06(0x32);
  return;
}

