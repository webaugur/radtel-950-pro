/**
 * @brief fun_0801e78c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801e78c, Ghidra name FUN_0801e78c, 314 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801e78c(undefined2 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = DAT_0801e81c;
  uVar4 = (uint)*DAT_0801e818;
  uVar2 = (uint)*(byte *)(DAT_0801e81c + 0xfa);
  if ((uVar4 != 0) && (uVar2 == DAT_0801e818[0x1c])) {
    FUN_0800a1c4(4);
    FUN_080154a4(0,0xf0,0xa5,0xd5,1,0,uVar4);
    uVar7 = 0xffff;
    FUN_08027a94(0xa5,0x62,0x30,0x30,DAT_08017cfc,0);
    FUN_08015500();
    FUN_080154a4(0,0xf0,0xd2,0x107,1,0);
    iVar1 = _DAT_08017d00;
    if (*(char *)(_DAT_08017d00 + 8) == '\x01') {
      uVar5 = 0;
      uVar6 = 0xffff;
      FUN_08014d88(0xdc,0x13,&DAT_08017d2c,0x18);
    }
    else {
      FUN_08014d88(0xd2,3,s_APRS_activation_of_08017d03 + 1,0x18,0,0xffff);
      uVar5 = 0;
      uVar6 = 0xffff;
      FUN_08014d88(0xee,9,s_CDCSS_is_invalid_08017d18,0x18);
    }
    FUN_08015500();
    FUN_08023510(0x48,7);
    if (*(char *)(iVar1 + 7) == '\0') {
      FUN_08025f44(0x514);
    }
    else {
      FUN_08025f44(800);
    }
    FUN_0800a1c4(4,uVar5,uVar6,uVar7);
    return;
  }
  if (*(char *)(DAT_0801e81c + uVar2 * 0x58 + 0x130) == '\x01') {
    iVar3 = DAT_0801e81c + uVar2 * 0x20;
    *(byte *)(iVar3 + 0x27f) = *(byte *)(iVar3 + 0x27f) & 0x7f;
    *(undefined2 *)(iVar1 + (uint)*(byte *)(iVar1 + 0xfa) * 0x20 + 0x278) = param_1;
  }
  else {
    iVar3 = DAT_0801e81c + uVar2 * 0x24;
    *(byte *)(iVar3 + 0x2e1) = *(byte *)(iVar3 + 0x2e1) & 0xcf;
    *(undefined2 *)(iVar1 + (uint)*(byte *)(iVar1 + 0xfa) * 0x24 + 0x2d8) = param_1;
  }
  FUN_080083cc();
  FUN_08018038();
  FUN_0800cb78(*(undefined1 *)(iVar1 + 0xfa),1);
  return;
}

