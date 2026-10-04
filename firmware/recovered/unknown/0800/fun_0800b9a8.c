/**
 * @brief fun_0800b9a8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800b9a8, Ghidra name FUN_0800b9a8, 144 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800b9a8(void)

{
  uint uVar1;
  uint uVar2;
  int extraout_r3;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_1c;
  undefined1 local_1b [11];
  
  uVar4 = 0x105;
  FUN_08000bca(&local_1c,3,0x2d);
  local_1c = 0x30;
  uVar2 = *(uint *)(DAT_0800ba38 + 4);
  for (uVar1 = 0; uVar1 < uVar2; uVar1 = uVar1 + 1 & 0xff) {
    local_1b[uVar1] = *(undefined1 *)(DAT_0800ba38 + uVar1 + 0x12);
  }
  local_1b[2] = 0;
  if (*(char *)(DAT_0800ba3c + 0xfa) == '\x01') {
    iVar3 = 0xaf;
  }
  else if (*(char *)(DAT_0800ba3c + 0xfa) == '\x02') {
    iVar3 = 0x108;
  }
  else {
    iVar3 = 0x56;
  }
  if ((*(char *)(DAT_0800ba40 + 0x1e) != '\0') &&
     (uVar1 = FUN_0801328c(), uVar1 != *(byte *)(extraout_r3 + 0xfa))) {
    uVar4 = 0;
  }
  FUN_080154a4(0xca,0xe8,iVar3,iVar3 + 0xc,1,uVar4);
  FUN_08014c68(iVar3,0xca,&local_1c,uVar4);
  FUN_08015500();
  return;
}

