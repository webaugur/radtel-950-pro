/**
 * @brief fun_0801bd68
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801bd68, Ghidra name FUN_0801bd68, 150 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_0801bd68(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  iVar1 = DAT_0801be00;
  uVar2 = (**(code **)(DAT_0801be00 + 4))(0x69);
  if ((int)(uVar2 << 0x10) < 0) {
    uVar2 = (**(code **)(iVar1 + 4))(0x68);
    if ((int)(uVar2 << 0x10) < 0) {
      *(undefined1 *)(iVar1 + 0x14) = 0;
      uVar2 = 0;
    }
    else {
      uVar2 = uVar2 & 0x1fff;
      *(undefined1 *)(iVar1 + 0x14) = 1;
    }
  }
  else {
    uVar3 = (**(code **)(iVar1 + 4))(0x6a);
    uVar2 = uVar3 & 0xfff | (uVar2 & 0xfff) << 0xc;
    *(undefined1 *)(iVar1 + 0x14) = 2;
    bVar5 = 0;
    bVar6 = 0;
    bVar4 = 0;
    do {
      if ((uVar3 & 0xff) == 0xff) {
        bVar5 = bVar5 + 1;
      }
      else if ((uVar3 & 0xff) == 0) {
        bVar6 = bVar6 + 1;
      }
      bVar4 = bVar4 + 1;
    } while (bVar4 < 5);
    if ((3 < bVar5) || (3 < bVar6)) {
      *(undefined1 *)(iVar1 + 0x14) = 0;
      uVar2 = 0;
    }
  }
  return uVar2;
}

