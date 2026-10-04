/**
 * @brief fun_0801100c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801100c, Ghidra name FUN_0801100c, 232 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801100c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = DAT_080110f8;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  iVar5 = *(int *)(DAT_080110f8 + 8);
  if (*(char *)(DAT_080110f4 + 0x43) == '\0') {
    FUN_08000bca(&local_24,6,0x2d);
    local_24 = CONCAT13(0x2e,(undefined3)local_24);
    uVar6 = 3;
    if (iVar5 == 3) {
      local_24 = CONCAT31(local_24._1_3_,0x30);
      iVar5 = 1;
    }
    else {
      iVar5 = 0;
    }
  }
  else {
    uVar6 = 0xff;
    FUN_08000bca(&local_24,5,0x2d);
    if (iVar5 == 3) {
      FUN_08000bca(&local_24,5,0x2d);
      local_24 = CONCAT22(local_24._2_2_,0x3030);
      iVar5 = 2;
    }
    else if (iVar5 == 4) {
      FUN_08000bca(&local_24,5,0x2d);
      local_24 = CONCAT31(local_24._1_3_,0x30);
      iVar5 = 1;
    }
    else {
      FUN_08000bca(&local_24,5,0x2d);
      iVar5 = 0;
    }
  }
  uVar4 = *(uint *)(iVar1 + 4);
  for (uVar3 = 0; uVar3 < uVar4; uVar3 = uVar3 + 1) {
    iVar2 = iVar5;
    if (uVar3 == uVar6) {
      iVar2 = iVar5 + 1;
    }
    iVar5 = iVar2 + 1;
    *(undefined1 *)((int)&local_24 + iVar2) = *(undefined1 *)(iVar1 + uVar3 + 0x12);
  }
  FUN_080154a4(0x3d,0xc6,0x48,0x6c,1,0);
  if (*(int *)(iVar1 + 8) == 3) {
    FUN_080149d0(0x48,0x46,&local_24,0);
  }
  else {
    FUN_080149d0(0x48,0x46,&local_24,0);
  }
  FUN_08015500();
  return;
}

