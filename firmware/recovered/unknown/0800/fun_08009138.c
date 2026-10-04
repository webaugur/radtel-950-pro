/**
 * @brief fun_08009138
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08009138, Ghidra name FUN_08009138, 120 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_08009138(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte bStack_11;
  undefined4 local_10;
  
  local_10 = param_4;
  FUN_08021824((param_1 & 0x7ff) << 5,&local_10,4);
  if (((char)local_10 != -1) && (local_10._3_1_ != '\0')) {
    iVar4 = 0;
    uVar2 = 4;
    do {
      bVar3 = (&bStack_11)[uVar2];
      bVar3 = (bVar3 & 0xf) + (bVar3 >> 4) * '\n';
      (&bStack_11)[uVar2] = bVar3;
      iVar4 = (uint)bVar3 + iVar4 * 100;
      uVar2 = uVar2 - 1 & 0xff;
    } while (uVar2 != 0);
    if (((*(char *)(DAT_080091b0 + 0x4a) == -0x5b) && (iVar1 = FUN_08009460(iVar4), iVar1 == 1)) ||
       (iVar4 = FUN_080093dc(iVar4), iVar4 == 1)) {
      return 1;
    }
  }
  return 0;
}

