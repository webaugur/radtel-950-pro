/**
 * @brief fun_0801aba4
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801aba4, Ghidra name FUN_0801aba4, 258 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0801aba4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_0801bcec;
  iVar1 = DAT_0801bbf4;
  if (param_1 == 1) {
    (**(code **)(DAT_0801bbf4 + 8))(9,0x6f);
    (**(code **)(iVar1 + 8))(9,0x106b);
    (**(code **)(iVar1 + 8))(9,0x2067);
    (**(code **)(iVar1 + 8))(9,0x3062);
    (**(code **)(iVar1 + 8))(9,0x4050);
    (**(code **)(iVar1 + 8))(9,0x5047);
    (**(code **)(iVar1 + 8))(9,0x603a);
    (**(code **)(iVar1 + 8))(9,0x702c);
    (**(code **)(iVar1 + 8))(9,0x8041);
    (**(code **)(iVar1 + 8))(9,0x9037);
    (**(code **)(iVar1 + 8))(9,0xa025);
    (**(code **)(iVar1 + 8))(9,0xb017);
    (**(code **)(iVar1 + 8))(9,0xc0e4);
    (**(code **)(iVar1 + 8))(9,0xd0cb);
    (**(code **)(iVar1 + 8))(9,0xe0b5);
    (**(code **)(iVar1 + 8))(9,0xf09f);
    (**(code **)(iVar1 + 8))(0x24,0x87ff);
    (**(code **)(iVar1 + 8))(0x70,0xc5c5);
                    /* WARNING: Could not recover jumptable at 0x0801bbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 8))(0x3f,0x800);
    return;
  }
  uVar3 = (**(code **)(DAT_0801bcec + 4))(0x24);
  (**(code **)(iVar2 + 8))(0x24,uVar3 & 0xffffffdf);
  (**(code **)(iVar2 + 8))(0x70,0);
  FUN_0801c548(*(undefined1 *)(iVar2 + 0x26));
  return;
}

