/**
 * @brief fun_0801160c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801160c, Ghidra name FUN_0801160c, 238 bytes.
 *       Not linked into rt950-firmware.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801160c(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint local_30 [4];
  char local_20 [12];
  undefined1 local_14;
  
  FUN_08001016(local_20,0x14);
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  FUN_080154a4(0,0xf0,0x74,0x9f,1,0x457);
  if (*(char *)(DAT_080116fc + 0x21) == '\x01') {
    if (*(char *)(DAT_080116fc + 0x43) == '\x01') {
      iVar2 = (*(byte *)(DAT_08011700 + 0x10) + 1) * 0x10 + 0xd100;
    }
    else if (*(char *)(DAT_080116fc + 0x43) == '\0') {
      iVar2 = (*(byte *)(DAT_08011700 + 0x10) + 1) * 0x10 + 0xd000;
    }
    else {
      iVar2 = (*(byte *)(DAT_08011700 + 0x10) + 1) * 0x10 + 0xd200;
    }
    FUN_08021824(iVar2,local_30,0xc);
  }
  if (((local_30[0] & 0xff) == 0xff) || ((local_30[0] & 0xff) == 0)) {
    if (*(char *)(_DAT_08011704 + 8) == '\x01') {
      FUN_08000850(local_20,&DAT_08011710);
    }
    else {
      FUN_08000850(local_20,s_Unknow_08011707 + 1);
    }
  }
  else {
    uVar3 = 0;
    do {
      cVar1 = *(char *)((int)local_30 + uVar3);
      if ((cVar1 == -1) || (cVar1 == '\0')) {
        local_20[uVar3] = '\0';
        break;
      }
      local_20[uVar3] = cVar1;
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 0xc);
    local_14 = 0;
  }
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  FUN_08022908(local_30,local_20,0xc);
  local_30[3] = local_30[3] & 0xffffff00;
  FUN_08014d88(0x7d,0x2b,local_30,0x18,0x457,0xffff);
  FUN_08015500();
  return;
}

