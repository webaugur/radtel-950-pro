/**
 * @brief fun_0800f378
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800f378, Ghidra name FUN_0800f378, 70 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_0800f378(undefined4 param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte local_38 [32];
  
  FUN_08021824(param_1,local_38,param_2);
  uVar3 = 0;
  do {
    if (param_2 <= uVar3) {
      return 0xff;
    }
    bVar2 = 1;
    uVar1 = 0;
    do {
      if ((local_38[uVar3] & bVar2) != 0) {
        return uVar1 + uVar3 * 8;
      }
      bVar2 = bVar2 << 1;
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < 8);
    uVar3 = uVar3 + 1 & 0xff;
  } while( true );
}

