/**
 * @brief fun_0800a110
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800a110, Ghidra name FUN_0800a110, 92 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800a110(void)

{
  int iVar1;
  short sVar2;
  undefined4 unaff_r4;
  byte bVar3;
  
  iVar1 = DAT_0800a130;
  if (*(char *)(DAT_0800a130 + 0x11) == -0x56) {
    FUN_0800a178();
    FUN_0800a154();
    *(undefined1 *)(iVar1 + 0x11) = 0;
    if (0x10 < *(uint *)(DAT_08018b6c + 8)) {
      sVar2 = 0xfe;
      bVar3 = 0;
      do {
        FUN_080154a4(0,0xf0,sVar2,sVar2 + 0x18,1,0,unaff_r4);
        FUN_08015500();
        sVar2 = sVar2 + -0x20;
        bVar3 = bVar3 + 1;
      } while (bVar3 < 3);
    }
    return;
  }
  return;
}

