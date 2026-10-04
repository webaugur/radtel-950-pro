/**
 * @brief fun_080277ec
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080277ec, Ghidra name FUN_080277ec, 32 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080277ec(void)

{
  dword dVar1;
  uint uVar2;
  
  dVar1 = DWORD_0802780c;
  uVar2 = 0;
  do {
    FUN_08027848();
    FUN_080277a0(8,dVar1 + uVar2);
    uVar2 = uVar2 + 8 & 0xffff;
  } while (uVar2 < 0x3dd8);
  return;
}

