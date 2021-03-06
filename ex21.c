#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[]) {

  int8_t n = 4;
  printf("%d %lu \n", n, sizeof(n));
  printf("%p \n", &n);
  n >>= 1;
  printf("%d %lu \n", n, sizeof(n));
  n >>= 1;
  printf("%d %lu \n", n, sizeof(n));
  n <<= 1;
  printf("%d %lu \n", n, sizeof(n));
  n <<= 1;
  printf("%d %lu \n", n, sizeof(n));
  n <<= 1;
  printf("%d %lu \n", n, sizeof(n));
  n <<= 1;
  printf("%d %lu \n", n, sizeof(n));
  n <<= 1;
  printf("%d %lu \n", n, sizeof(n));
  n <<= 1;
  printf("%d %lu \n", n, sizeof(n));
  n <<= 1;
  printf("%d %lu \n", n, sizeof(n));
  n <<= 1;
  printf("%d %lu \n", n, sizeof(n));

  int wat = 4;
  wat ^= 1;

  while (n) {
    if (n & 1)
      printf("1");
    else
      printf("0");

    n >>= 1;
  }
  printf("\n");

  while (wat) {
    if (wat & 1)
      printf("1");
    else
      printf("0");

    wat >>= 1;
  }
  printf("\n");

  return 0;
}
