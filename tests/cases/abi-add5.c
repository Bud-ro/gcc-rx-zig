/* RX calling convention: first 4 integer args arrive in r1-r4, the 5th
   on the stack. Adding all five exercises argument passing across the
   register/stack boundary. Snapshot test -- see tests/snapshots/abi-add5.s. */
/* { dg-options "-Os" } */

int add5 (int a, int b, int c, int d, int e)
{
  return a + b + c + d + e;
}

/* The 5th argument is loaded from the stack frame. */
/* { dg-final { scan-assembler "add" } } */
/* { dg-final { scan-assembler "rts" } } */
