/**
 * @brief fun_0800faf8
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800faf8, Ghidra name FUN_0800faf8, 192 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800faf8(void)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  iVar2 = DAT_0800fbb8;
  bVar3 = FUN_0800f378(0x9000,6);
  if (bVar3 < 0x2a) {
    FUN_08021824((uint)bVar3 * 0x60 + 0x9010,iVar2,0x60);
    uVar1 = *(ushort *)(iVar2 + 0x5e);
    uVar4 = FUN_0800a878(iVar2,0x5e);
    if (uVar4 == uVar1) {
      FUN_08000ee4(DAT_0800fbbc,iVar2,0x20);
      FUN_08000ee4(DAT_0800fbc0,iVar2 + 0x20,0x2d);
      iVar2 = DAT_0800fbc0;
      uVar4 = 0;
      do {
        if (7 < *(byte *)(iVar2 + uVar4 + 9)) {
          *(undefined1 *)(iVar2 + uVar4 + 9) = 0;
        }
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < 4);
      if (9 < *(byte *)(iVar2 + 0xd)) {
        *(undefined1 *)(iVar2 + 0xd) = 0;
      }
      if (9 < *(byte *)(iVar2 + 0xe)) {
        *(undefined1 *)(iVar2 + 0xe) = 0;
      }
      if (9 < *(byte *)(iVar2 + 0xf)) {
        *(undefined1 *)(iVar2 + 0xf) = 0;
      }
      if (*(char *)(iVar2 + 6) == -1) {
        *(undefined1 *)(iVar2 + 6) = 0;
      }
      uVar4 = 0;
      do {
        if (0x18 < *(byte *)(iVar2 + uVar4 + 0x1b)) {
          *(undefined1 *)(iVar2 + uVar4 + 0x1b) = 0;
        }
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < 10);
      if (1 < *(byte *)(iVar2 + 0x25)) {
        *(undefined1 *)(iVar2 + 0x25) = 0;
      }
      if (1 < *(byte *)(DAT_0800fbbc + 0x1f)) {
        *(undefined1 *)(DAT_0800fbbc + 0x1f) = 0;
      }
      return;
    }
  }
  FUN_0801b394();
  return;
}

