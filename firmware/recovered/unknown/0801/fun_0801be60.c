/**
 * @brief fun_0801be60
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801be60, Ghidra name FUN_0801be60, 182 bytes.
 *       Not linked into rt950-firmware.
 */

undefined1 FUN_0801be60(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = 0;
  uVar2 = *(uint *)(DAT_0801bf18 + 0xc);
  uVar4 = uVar2 / DAT_0801bf1c & 0xffff;
  *(short *)(DAT_0801bf20 + 2) = (short)(uVar2 / DAT_0801bf1c);
  uVar5 = (uint)*(byte *)(DAT_0801bf18 + 0x17);
  if (uVar2 < DAT_0801bf24) {
    if (uVar2 < DAT_0801bf28) {
      if (uVar2 < DAT_0801bf30) {
        if (uVar2 < DAT_0801bf34) {
          if (DAT_0801bf3c < uVar2 + DAT_0801bf38) {
            iVar3 = *(int *)(DAT_0801bf20 + 0x74);
          }
          else {
            uVar1 = (int)(uVar4 - 0xf) / 5 & 0xff;
            if (0xb < uVar1) {
              uVar1 = 0xb;
            }
            iVar3 = *(int *)(DAT_0801bf20 + 0x5c + uVar5 * 4);
          }
        }
        else {
          uVar1 = (int)(uVar4 - 0x82) / 3 & 0xff;
          if (0xf < uVar1) {
            uVar1 = 0xf;
          }
          iVar3 = ((int *)(DAT_0801bf20 + 0x74))[uVar5];
        }
      }
      else {
        uVar1 = (int)(uVar4 - 200) / 5 & 0xff;
        iVar3 = *(int *)(DAT_0801bf20 + 0x80 + uVar5 * 4);
      }
    }
    else {
      if (DAT_0801bf2c <= uVar2) {
        uVar1 = (int)(uVar4 - 0x15e) / 5 & 0xff;
      }
      iVar3 = *(int *)(DAT_0801bf20 + 0x8c + uVar5 * 4);
    }
  }
  else {
    uVar1 = (int)(uVar4 - 400) / 10 & 0xff;
    iVar3 = *(int *)(DAT_0801bf20 + 0x68 + uVar5 * 4);
  }
  return *(undefined1 *)(iVar3 + uVar1);
}

