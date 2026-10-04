/**
 * @brief fun_0800682c
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0800682c, Ghidra name FUN_0800682c, 130 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_0800682c(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_080068b4;
  uVar2 = DAT_080068b0;
  while ((cVar1 = *(char *)(iVar3 + 0xf), cVar1 != '\0' && (cVar1 != '\x01'))) {
    if (cVar1 == '\x02') {
      FUN_0801c41c(1);
      *(undefined1 *)(iVar3 + 0x10) =
           *(undefined1 *)(DAT_080068c0 + (uint)*(byte *)(DAT_080068bc + 0x1e) * 2);
      if (*(char *)(iVar3 + 0xe) == '\x01') {
        FUN_08006a78(DAT_080068c4 + 0xe5);
        *(undefined1 *)(iVar3 + 0xe) = 0;
      }
      else {
        FUN_08006a78(DAT_080068c4);
      }
      *(undefined1 *)(iVar3 + 0xf) = 3;
      FUN_08012ae6(uVar2,0x100);
    }
    else if (cVar1 == '\x03') {
      FUN_08003808();
      *(undefined1 *)(iVar3 + 0xf) = 4;
      FUN_0801c41c(0);
    }
    else {
      *(undefined1 *)(iVar3 + 0xf) = 0;
      if (*(char *)(DAT_080068b8 + 0x4b) == '\0') {
        FUN_08012ae2(uVar2,0x100);
      }
    }
  }
  return;
}

