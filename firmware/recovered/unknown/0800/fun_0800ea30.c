/**
 * @brief fun_0800ea30
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800ea30, Ghidra name FUN_0800ea30, 94 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800ea30(void)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_0800ea58;
  *(undefined1 *)(DAT_0800ea58 + 1) = 0;
  *(undefined1 *)(iVar1 + 0x1f) = 0;
  FUN_0801c8fc();
  FUN_0801a9a4(*(undefined1 *)(DAT_0800ea5c + 0x10a),0);
  FUN_0801ac32(0);
  uVar4 = 0x2965;
  FUN_080154a4(0x76,0x93,299,0x13a,1,0x2965,unaff_r4,unaff_lr);
  uVar3 = DAT_0800b600;
  uVar2 = FUN_08027b14(299,0x78,0x19,0xf);
  FUN_08015500((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),uVar3,uVar4);
  return;
}

