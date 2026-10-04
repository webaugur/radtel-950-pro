/**
 * @brief fun_080083cc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080083cc, Ghidra name FUN_080083cc, 46 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080083cc(void)

{
  undefined2 *puVar1;
  
  puVar1 = DAT_080083fc;
  FUN_0800864c(0,0,*DAT_080083fc);
  FUN_0800864c(1,0,puVar1[1]);
  FUN_0800864c(2,0,puVar1[2]);
  FUN_080089e8();
  *(undefined1 *)(DAT_08008400 + 0x14) = 1;
  return;
}

