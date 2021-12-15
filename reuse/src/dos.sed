/  IO_WriteC(f, EolCh);/i\
# if defined _MSC_VER | defined MSDOS | defined __BORLANDC__\
\  if (f > 2) IO_WriteC (f, '\\r');\
# endif
/ZfM_24(Z143, Z122);/i\
# if defined _MSC_VER | defined MSDOS | defined __BORLANDC__\
if (Z143 > 2) ZfM_24 (Z143, '\\r');\
# endif
/ if (i == Strings_cMaxStrLength) {/i\
# if defined _MSC_VER | defined MSDOS | defined __BORLANDC__\
\    if (ch == '\\r') { IO_ReadC (f); goto EXIT_2; }\
# endif
/if (Z135 == Zp1PEAFD_0) {/i\
# if defined _MSC_VER | defined MSDOS | defined __BORLANDC__\
if (Z150 == '\\r') { ZfM_7 (Z180); goto EXIT_2; }\
# endif
