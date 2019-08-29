#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  printf("\nINTEGER TYPE BOUNDS\n");
  printf("Signed char: %d...%d\n", SCHAR_MIN, SCHAR_MAX);
  printf("Short:       %d...%d\n", SHRT_MIN, SHRT_MAX);
  printf("Int:         %d...%d\n", INT_MIN, INT_MAX);
  printf("Long:        %ld...%ld\n", LONG_MIN, LONG_MAX);
  printf("Long long:   %lld...%lld\n", LLONG_MIN, LLONG_MAX);

  printf("\nFLOATS\n");
  printf("Float decimal precision:       %d\n", FLT_DIG);
  printf("Double decimal precision:      %d\n", DBL_DIG);
  printf("Long double decimal precision: %d\n", LDBL_DIG);
  return 0;
}