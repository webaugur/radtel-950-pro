/**
 * @brief fun_08010e28
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08010e28, Ghidra name FUN_08010e28, 318 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08010e28(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  
  iVar4 = DAT_08010f6c;
  iVar3 = DAT_08010f68;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  bVar2 = false;
  uVar5 = (uint)*(ushort *)(DAT_08010f6c + 2);
  if (*(char *)(DAT_08010f68 + 0x43) == '\0') {
    FUN_08000850(&local_24,s__03d__02d_08010f7c,uVar5 / 100,uVar5 % 100);
    local_1c = local_1c & 0xffffff;
    iVar6 = 0;
    bVar2 = true;
  }
  else if (uVar5 < 1000) {
    FUN_08000850(&local_24,&DAT_08010f88);
    iVar6 = 5;
  }
  else {
    FUN_08000850(&local_24,s__02d__03d_08010f70,uVar5 / 1000,uVar5 % 1000);
    bVar2 = true;
    iVar6 = 0;
  }
  FUN_080154a4(0,0xf0,0x47,100,1,0);
  if (iVar6 == 7) {
    FUN_080149d0(0x48,0x46,&local_24,0);
  }
  else if (iVar6 == 5) {
    FUN_080149d0(0x48,0x46,&local_24,0);
  }
  else {
    FUN_080149d0(0x48,0x46,&local_24,0);
  }
  FUN_08010dc8();
  FUN_08027b14(0x47,0xd,0x1e,0xc,*(undefined4 *)(DAT_08010f90 + (uint)*(byte *)(iVar3 + 0x43) * 4));
  cVar1 = *(char *)(iVar3 + 0x43);
  if (cVar1 == '\x01') {
    FUN_08027b14(0x58,0xd,0x1b,0xc,
                 *(undefined4 *)(DAT_08010f90 + 0x14 + (uint)*(byte *)(iVar4 + 1) * 4));
  }
  else if (cVar1 != '\0') {
    FUN_08027b14(0x58,0xd,0x1b,0xc,*(undefined4 *)(DAT_08010f90 + 0x1c));
  }
  FUN_08027b14(0x49,0x35,10,0x1a,DAT_08010f94);
  if (bVar2) {
    FUN_08027b14(0x57,0xc6,0x1e,0xc,DAT_08010f9c);
  }
  else {
    FUN_08027b14(0x57,0xc6,0x1e,0xc,DAT_08010f98);
  }
  FUN_08015500();
  return;
}

