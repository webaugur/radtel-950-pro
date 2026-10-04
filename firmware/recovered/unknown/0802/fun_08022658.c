/**
 * @brief fun_08022658
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x08022658, Ghidra name FUN_08022658, 236 bytes.
 *       Not linked into rt950-firmware.
 */

void FUN_08022658(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar3 = DAT_0802274c;
  pcVar1 = DAT_08022748;
  if (*(char *)(DAT_08022744 + 1) == '\x11') {
    if (*DAT_08022748 == '\x01') {
      iVar2 = FUN_0801a91c();
      if (iVar2 == 0) {
        *(undefined1 *)(iVar3 + 3) = 0;
      }
      else if (*(byte *)(iVar3 + 3) < 5) {
        *(byte *)(iVar3 + 3) = *(byte *)(iVar3 + 3) + 1;
      }
      else {
        FUN_0801c38c();
        FUN_0801a4f0(1);
        *(undefined1 *)(iVar3 + 3) = 0;
        *pcVar1 = '\x02';
      }
    }
    else if (*DAT_08022748 == '\x02') {
      iVar2 = FUN_0801a91c();
      if (iVar2 == 0) {
        if (*(byte *)(iVar3 + 3) < 5) {
          *(byte *)(iVar3 + 3) = *(byte *)(iVar3 + 3) + 1;
        }
        else {
          FUN_0801a4f0(0);
          *pcVar1 = '\x01';
        }
      }
      else {
        *(undefined1 *)(iVar3 + 3) = 0;
        iVar3 = FUN_0801bd68();
        *(int *)(pcVar1 + 8) = iVar3;
        if (iVar3 != 0) {
          iVar3 = FUN_0801be20();
          pcVar1[4] = (char)iVar3;
          if (iVar3 == 1) {
            uVar4 = (uint)(DAT_08022750 * *(int *)(pcVar1 + 8)) / DAT_08022754;
            *(uint *)(pcVar1 + 8) = uVar4;
            if (uVar4 < 0x259) {
              FUN_0801a3ac(0,0);
              pcVar1[4] = '\0';
            }
            else {
              uVar5 = FUN_080096a0();
              *(undefined4 *)(pcVar1 + 8) = uVar5;
              FUN_0801a3ac(1,uVar5,0);
            }
          }
          else {
            iVar3 = FUN_080096dc(*(undefined4 *)(pcVar1 + 8));
            if (iVar3 == 0) {
              pcVar1[0xe] = '\0';
              pcVar1[0xf] = '\0';
              pcVar1[0xc] = '\0';
              FUN_0801a3ac(2,*(uint *)(pcVar1 + 8) & 0x7fffff,0);
            }
            else {
              *(int *)(pcVar1 + 8) = iVar3;
              *(undefined2 *)(pcVar1 + 0xe) = *(undefined2 *)(pcVar1 + -0xd0);
              pcVar1[0xc] = '\x01';
              FUN_0801a3ac(2,iVar3,1);
            }
          }
          *pcVar1 = '\x03';
        }
      }
    }
  }
  return;
}

