/**
 * @brief fun_080217d0
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080217d0, Ghidra name FUN_080217d0, 80 bytes.
 *       Not linked into rt950-firmware.
 */

undefined1 FUN_080217d0(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  ushort uVar4;
  
  uVar1 = DAT_08021820;
  uVar4 = 0;
  while (iVar3 = FUN_0801ca20(uVar1,2), iVar3 == 0) {
    uVar4 = uVar4 + 1;
    if (3000 < uVar4) {
      return 0;
    }
  }
  FUN_0801ca32(uVar1,0xa5);
  do {
    iVar3 = FUN_0801ca20(uVar1,1);
    if (iVar3 != 0) {
      uVar2 = FUN_0801ca2e(uVar1);
      return uVar2;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xbb9);
  return 0;
}

