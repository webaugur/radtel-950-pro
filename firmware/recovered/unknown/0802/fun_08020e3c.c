/**
 * @brief fun_08020e3c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020e3c, Ghidra name FUN_08020e3c, 110 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08020e3c(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_08000bca(&local_20,9,0x2d);
  local_20 = CONCAT13(0x2e,(undefined3)local_20);
  iVar2 = 0;
  uVar4 = *(uint *)(DAT_08020eac + 4);
  for (uVar1 = 0; uVar1 < uVar4; uVar1 = uVar1 + 1) {
    iVar3 = iVar2;
    if (uVar1 == 3) {
      iVar3 = iVar2 + 1;
    }
    iVar2 = iVar3 + 1;
    *(undefined1 *)((int)&local_20 + iVar3) = *(undefined1 *)(DAT_08020eac + uVar1 + 0x12);
  }
  FUN_080154a4(0x50,0xa5,0x55,0x69,1,0);
  FUN_08014f44(0x55,0x50,&local_20,0x10,0,0x6cb7,1);
  FUN_08015500();
  return;
}

