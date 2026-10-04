/**
 * @brief fun_08012e38
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08012e38, Ghidra name FUN_08012e38, 164 bytes.
 *       Not linked into rt950-firmware.
 */

int FUN_08012e38(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_28 [4];
  
  if ((*(char *)(DAT_08012edc + 0x4a) == -0x5b) && ((char)DAT_08012ee0[0x7d] == '\x02')) {
    uVar2 = DAT_08012ee0[0x19e];
  }
  else {
    uVar2 = *DAT_08012ee0;
  }
  uVar5 = 0;
  local_28[0] = param_1;
  local_28[1] = param_2;
  local_28[2] = param_3;
  local_28[3] = param_4;
  FUN_08000fd2(DAT_08012ee4,0x10);
  uVar4 = 0;
  do {
    if ((1 << uVar4 & (uint)uVar2) != 0) {
      if (param_1 == uVar5) {
        FUN_08021824(uVar4 * 0x10 + 0xc000,local_28,0xc);
        iVar3 = DAT_08012ee4;
        uVar5 = 0;
        break;
      }
      uVar5 = uVar5 + 1 & 0xff;
    }
    uVar4 = uVar4 + 1 & 0xff;
    if (9 < uVar4) {
      return DAT_08012ee4;
    }
  } while( true );
  while( true ) {
    *(char *)(iVar3 + uVar5) = cVar1;
    uVar5 = uVar5 + 1 & 0xff;
    if (0xb < uVar5) break;
    cVar1 = *(char *)((int)local_28 + uVar5);
    if ((cVar1 == -1) || (cVar1 == '\0')) break;
  }
  *(undefined1 *)(iVar3 + uVar5) = 0;
  if (uVar5 == 0) {
    if (*(char *)(DAT_08012ee8 + 8) == '\x01') {
      FUN_08000850(DAT_08012ee4,s__s__d_08012ef4,&DAT_08012efc,uVar4 + 1);
    }
    else {
      FUN_08000850(DAT_08012ee4,s__s__d_08012ef4,&DAT_08012eec,uVar4 + 1);
    }
  }
  return DAT_08012ee4;
}

