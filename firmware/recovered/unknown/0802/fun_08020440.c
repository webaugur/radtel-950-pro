/**
 * @brief fun_08020440
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08020440, Ghidra name FUN_08020440, 180 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08020440(void)

{
  uint *puVar1;
  undefined4 extraout_r1;
  int local_c;
  
  puVar1 = DAT_080204f4;
  local_c = 0;
  *DAT_080204f4 = *DAT_080204f4 | 0x10000;
  do {
    local_c = local_c + 1;
    if ((*puVar1 & 0x20000) != 0) break;
  } while (local_c != 0x3000);
  if ((int)(*puVar1 << 0xe) < 0) {
    puVar1[1] = puVar1[1];
    puVar1[1] = puVar1[1] & 0xffffc7ff;
    puVar1[1] = puVar1[1] | 0x2000;
    puVar1[1] = puVar1[1] & 0xfffff8ff;
    puVar1[1] = puVar1[1] | 0x400;
    puVar1[1] = puVar1[1] & DAT_080204f8;
    puVar1[1] = puVar1[1] | DAT_080204fc;
    *puVar1 = *puVar1 | 0x1000000;
    do {
    } while (-1 < (int)(*puVar1 << 6));
    FUN_0801a7a0(1);
    puVar1[1] = puVar1[1] & 0xfffffffc;
    puVar1[1] = puVar1[1] | 2;
    do {
    } while ((puVar1[1] & 0xf) >> 2 != 2);
    FUN_0801a7a0(0,extraout_r1,1,local_c);
    return;
  }
  return;
}

