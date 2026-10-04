/**
 * @brief fun_080107cc
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x080107cc, Ghidra name FUN_080107cc, 108 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_080107cc(void)

{
  undefined1 *puVar1;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(char *)(DAT_08010808 + 0x21) != '\x01') {
    FUN_080207ec(0xc);
    puVar1 = DAT_0801080c;
    *DAT_0801080c = 3;
    *(undefined2 *)(puVar1 + 4) = 1000;
    FUN_0800ef7c(*(undefined2 *)(puVar1 + 2));
    FUN_0800ee88();
    FUN_080154a4(0x3d,0xc6,0x48,0x6c,1,0,unaff_r4,unaff_lr);
    uVar3 = 0;
    uVar4 = 0xffff;
    uVar2 = FUN_08014d88(0x48,0x55,s_SEEK____0801178c,0x18);
    FUN_08015500((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),uVar3,uVar4);
    return;
  }
  FUN_080073f8(7);
  return;
}

