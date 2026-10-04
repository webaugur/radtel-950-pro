/**
 * @brief fun_080218d8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080218d8, Ghidra name FUN_080218d8, 86 bytes.
 *       Not linked into rt950-firmware.
 */

undefined1 FUN_080218d8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  ushort uVar4;
  
  uVar1 = DAT_08021930;
  uVar4 = 0;
  FUN_0801ca32(DAT_08021930,param_1);
  do {
    iVar3 = FUN_0801ca20(uVar1,1);
    if (iVar3 != 0) {
      uVar2 = FUN_0801ca2e(uVar1);
      do {
        iVar3 = FUN_0801ca20(uVar1,0x80);
        if (iVar3 != 1) {
          return uVar2;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0xbb9);
      return 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xbb9);
  return 0;
}

