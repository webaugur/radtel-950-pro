/**
 * @brief fun_080245e8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080245e8, Ghidra name FUN_080245e8, 200 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_080245e8(void)

{
  ulonglong uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 in_d0;
  
  cVar3 = (~(uint)((ulonglong)in_d0 >> 0x34) & 0x7ff) == 0;
  if (!(bool)cVar3) {
    uVar1 = (ulonglong)DAT_080246b0 >> 0x20;
    uVar4 = (undefined4)DAT_080246b0;
    FUN_08028798();
    if (cVar3 == '\0') {
      in_d0 = FUN_08029b90();
      uVar2 = (uint)((ulonglong)in_d0 >> 0x20);
      cVar3 = (~(uVar2 >> 0x14) & 0x7ff) == 0;
      if ((bool)cVar3) {
        FUN_080011c4(2);
        uVar4 = FUN_08025c18();
        return uVar4;
      }
      FUN_08028798((int)in_d0,uVar2,uVar4,(int)uVar1,in_d0);
      if (cVar3 != '\0') {
        FUN_080011c4(2);
        uVar4 = FUN_08025c38();
        return uVar4;
      }
    }
  }
  return (int)in_d0;
}

