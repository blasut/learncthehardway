#include <stdio.h>
#include <string.h>

void truncate() {
  printf("truncate:\n");
  int l;
  short s;
  char c;

  l = 0xdeadbeef;
  s = l;
  c = l;

  printf("l = 0x%x (%d bits)\n", l, sizeof(l) * 8);
  printf("s = 0x%x (%d bits)\n", s, sizeof(s) * 8);
  printf("c = 0x%x (%d bits)\n", c, sizeof(c) * 8);

}

void wrap_around() {
  printf("wraparound:\n");
  unsigned int num = 0xffffffff;

  printf("num is %d bits long\n", sizeof(num) * 8);
  printf("num = 0x%x\n", num);
  printf("num + 1 = 0x%x\n", num + 1);
}

void signedness() {
  printf("signedness:\n");
  int l;

  // highest positive value a signed integer can hold,
  // because we use the last bits to determine signednesses(?)
  l = 0x7fffffff;

  printf("l = %d (0x%x)\n", l, l);
  printf("l + 1 = %d (0x%x)\n", l + 1 , l + 1);
}

int simpleexploit(int *array, int len) {
  int *myarray, i;

  myarray = malloc(len * sizeof(int));    /* [1] */
  if(myarray == NULL){
    return -1;
  }

  for(i = 0; i < len; i++){              /* [2] */
    myarray[i] = array[i];
  }

  return myarray;
}

int main(void){
  truncate();
  printf("\n");
  wrap_around();
  printf("\n");
  signedness();
  printf("\n");
  return 0;
}

