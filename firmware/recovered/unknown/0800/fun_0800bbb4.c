/**
 * @brief fun_0800bbb4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800bbb4, Ghidra name FUN_0800bbb4, 186 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800bbb4(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int extraout_r3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_24 = 0;
  uVar5 = 0x105;
  FUN_08000bca(&local_20,7,0x2d);
  local_20 = CONCAT13(0x2e,(undefined3)local_20);
  iVar2 = 0;
  uVar4 = *(uint *)(DAT_0800bc70 + 4);
  for (uVar1 = 0; uVar1 < uVar4; uVar1 = uVar1 + 1) {
    iVar3 = iVar2;
    if (uVar1 == 3) {
      iVar3 = iVar2 + 1;
    }
    iVar2 = iVar3 + 1;
    *(undefined1 *)((int)&local_20 + iVar3) = *(undefined1 *)(DAT_0800bc70 + uVar1 + 0x12);
  }
  local_1c = local_1c & 0xffffff;
  local_24 = CONCAT22(local_24._2_2_,0x2d2d);
  if (*(char *)(DAT_0800bc74 + 0xfa) == '\x01') {
    iVar2 = 0x8a;
  }
  else if (*(char *)(DAT_0800bc74 + 0xfa) == '\x02') {
    iVar2 = 0xe3;
  }
  else {
    iVar2 = 0x31;
  }
  if ((*(char *)(DAT_0800bc78 + 0x1e) != '\0') &&
     (uVar1 = FUN_0801328c(), uVar1 != *(byte *)(extraout_r3 + 0xfa))) {
    uVar5 = 0;
  }
  FUN_080154a4(0x24,0xca,iVar2,iVar2 + 0x1a,1,uVar5);
  FUN_08014b60(iVar2,0x26,&local_20,uVar5);
  FUN_08014c68(iVar2 + 0xe,0xb4,&local_24,uVar5);
  FUN_08015500();
  return;
}

