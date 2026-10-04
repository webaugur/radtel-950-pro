/**
 * @brief crc16_xmodem_buffer
 *
 * CRC-16/XMODEM over a caller buffer. Polynomial 0x1021, init 0. The Thumb code leaves the residue in r0. The decompiler dropped the return.
 *
 * @note V0.29 address 0x0800a878, Ghidra name FUN_0800a878, 62 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800a878(int param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = 0;
  for (uVar3 = 0; uVar3 < param_2; uVar3 = uVar3 + 1 & 0xffff) {
    uVar1 = uVar1 ^ (uint)*(byte *)(param_1 + uVar3) << 8;
    uVar2 = 0;
    do {
      if ((int)(uVar1 << 0x10) < 0) {
        uVar1 = uVar1 << 1 ^ 0x1021;
      }
      else {
        uVar1 = uVar1 << 1;
      }
      uVar1 = uVar1 & 0xffff;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
  }
  return;
}

