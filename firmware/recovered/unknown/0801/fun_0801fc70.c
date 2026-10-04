/**
 * @brief fun_0801fc70
 *
 * Unidentified. No string, register, or SDK match has been checked for this function.
 *
 * @note V0.29 address 0x0801fc70, Ghidra name FUN_0801fc70, 384 bytes.
 *       Not linked into rt950-firmware.
 */

undefined4 FUN_0801fc70(void)

{
  undefined1 uVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  pbVar3 = DAT_0801fdf0;
  iVar11 = 0x55;
  iVar6 = FUN_080068e0(DAT_0801fdf0 + 1);
  iVar4 = DAT_0801fdf4;
  *(int *)(DAT_0801fdf4 + 6) = iVar6;
  uVar1 = *(undefined1 *)(iVar4 + 4);
  *(undefined1 *)(iVar4 + 4) = 0;
  iVar5 = DAT_0801fdf8;
  uVar9 = (uint)*(byte *)(iVar4 + 2);
  if ((uVar9 == 0x20) || (*pbVar3 == 0)) {
    uVar8 = 1;
  }
  else {
    if (uVar9 != 1) {
      uVar7 = 0;
      bVar2 = *(byte *)(DAT_0801fdf8 + uVar9);
      while( true ) {
        if (bVar2 <= uVar7) goto LAB_0801fd1e;
        iVar10 = *(int *)(pbVar3 + uVar9 * 4 + 0xb);
        if (*(int *)(iVar10 + uVar7 * 0xc) == iVar6) break;
        uVar7 = uVar7 + 1;
      }
      *(undefined1 *)(iVar4 + 4) = 1;
      iVar11 = 0xaa;
      *(uint *)(iVar4 + 10) = *(int *)(pbVar3 + uVar9 * 4 + 0xb) + uVar7 * 0xc;
      while ((uVar7 = uVar7 + 1, uVar7 < bVar2 && (*(int *)(iVar10 + uVar7 * 0xc) == iVar6))) {
        *(char *)(iVar4 + 4) = *(char *)(iVar4 + 4) + '\x01';
      }
LAB_0801fd1e:
      if (iVar11 == 0x55) {
        uVar9 = 0;
        while( true ) {
          iVar6 = 0x55;
          if (*(byte *)(iVar5 + (uint)*(byte *)(iVar4 + 2)) <= uVar9) break;
          uVar12 = *(uint *)(*(int *)(pbVar3 + (uint)*(byte *)(iVar4 + 2) * 4 + 0xb) + uVar9 * 0xc);
          uVar7 = FUN_08000ea6(*(undefined4 *)
                                (*(int *)(pbVar3 + (uint)*(byte *)(iVar4 + 2) * 4 + 0xb) +
                                uVar9 * 0xc + 4));
          if ((*pbVar3 < uVar7) &&
             (*(uint *)(iVar4 + 6) == uVar12 >> ((uVar7 - *pbVar3) * 4 & 0xff))) {
            *(char *)(iVar4 + 4) = *(char *)(iVar4 + 4) + '\x01';
            iVar6 = 0xaa;
            *(uint *)(iVar4 + 10) =
                 *(int *)(pbVar3 + (uint)*(byte *)(iVar4 + 2) * 4 + 0xb) + uVar9 * 0xc;
            goto LAB_0801fdb8;
          }
          uVar9 = uVar9 + 1;
        }
LAB_0801fdd4:
        if (iVar6 == 0x55) {
          *(uint *)(iVar4 + 6) = *(uint *)(iVar4 + 6) >> 4;
          *(undefined1 *)(iVar4 + 4) = uVar1;
          return 1;
        }
      }
      return 0;
    }
    *(undefined4 *)(iVar4 + 10) = *(undefined4 *)(pbVar3 + 0xf);
    uVar8 = 0;
  }
  return uVar8;
LAB_0801fdb8:
  uVar9 = uVar9 + 1;
  if (*(byte *)(iVar5 + (uint)*(byte *)(iVar4 + 2)) <= uVar9) goto LAB_0801fdd4;
  uVar12 = *(uint *)(*(int *)(pbVar3 + (uint)*(byte *)(iVar4 + 2) * 4 + 0xb) + uVar9 * 0xc);
  uVar7 = FUN_08000ea6(*(undefined4 *)
                        (*(int *)(pbVar3 + (uint)*(byte *)(iVar4 + 2) * 4 + 0xb) + uVar9 * 0xc + 4))
  ;
  if ((uVar7 <= *pbVar3) || (*(uint *)(iVar4 + 6) != uVar12 >> ((uVar7 - *pbVar3) * 4 & 0xff)))
  goto LAB_0801fdd4;
  *(char *)(iVar4 + 4) = *(char *)(iVar4 + 4) + '\x01';
  goto LAB_0801fdb8;
}

