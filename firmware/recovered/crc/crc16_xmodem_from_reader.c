/**
 * @brief crc16_xmodem_from_reader
 *
 * Same CRC-16 loop as crc16_xmodem_buffer, but each byte comes from FUN_080217d0. Calls around the loop take a literal 0x1000. The source of the bytes is not named.
 *
 * @note V0.29 address 0x08008ad8, Ghidra name FUN_08008ad8, 128 bytes.
 *       Not linked into rt950-firmware.
 */

uint FUN_08008ad8(uint param_1)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = DAT_08008b58;
  uVar4 = 0;
  FUN_08012ae2(DAT_08008b58,0x1000);
  FUN_0800ad22(1);
  FUN_080218d8(3);
  FUN_080218d8(0x30);
  FUN_080218d8(1);
  FUN_080218d8(0);
  for (uVar5 = 0; uVar5 < param_1; uVar5 = uVar5 + 1) {
    iVar3 = FUN_080217d0();
    uVar4 = (uVar4 ^ iVar3 << 8) & 0xffff;
    bVar2 = 0;
    do {
      if ((int)(uVar4 << 0x10) < 0) {
        uVar4 = uVar4 << 1 ^ 0x1021;
      }
      else {
        uVar4 = uVar4 << 1;
      }
      uVar4 = uVar4 & 0xffff;
      bVar2 = bVar2 + 1;
    } while (bVar2 < 8);
  }
  FUN_08012ae6(uVar1,0x1000);
  FUN_0800ad22(1);
  return uVar4;
}

