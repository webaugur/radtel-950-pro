/**
 * @brief fun_080096dc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080096dc, Ghidra name FUN_080096dc, 74 bytes.
 *       Not linked into rt950-firmware.
 */

undefined2 FUN_080096dc(uint param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  iVar1 = DAT_08009728;
  uVar4 = 0;
  do {
    uVar2 = FUN_08012578(*(undefined2 *)(iVar1 + uVar4 * 2));
    bVar3 = 0;
    do {
      if ((int)(uVar2 << 9) < 0) {
        uVar2 = uVar2 << 1 | 1;
      }
      else {
        uVar2 = uVar2 << 1;
      }
      uVar2 = uVar2 & 0x7fffff;
      if ((param_1 & 0x7fffff) == uVar2) {
        *(uint *)(DAT_0800972c + 0x10) = uVar4 + 1;
        return *(undefined2 *)(iVar1 + uVar4 * 2);
      }
      bVar3 = bVar3 + 1;
    } while (bVar3 < 0x17);
    uVar4 = uVar4 + 1 & 0xff;
    if (0x68 < uVar4) {
      return 0;
    }
  } while( true );
}

