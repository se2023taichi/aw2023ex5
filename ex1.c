#include <stdio.h>
int main(void) {
  int i;
  char z[11] = "hello world";
  for (i = 0; i < 12; i++) {
    printf("%c", z[i]);
  }
  printf("\n");
  printf("%d\n", i);
  return 0;
}