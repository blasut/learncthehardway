#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BUFSIZE 16
#define OVERSIZE 8 /* overflow buf2 by OVERSIZE bytes */

void main(void) {
  long b_diff;
  char *buf0 = (char*)malloc(BUFSIZE);		// create two buffers
  char *buf1 = (char*)malloc(BUFSIZE);

  b_diff = (long)buf1 - (long)buf0;	// difference between locations
  printf("Initial values:  ");
  printf("buf0=%p, buf1=%p, b_diff=0x%x bytes\n", buf0, buf1, b_diff);

  memset(buf1, 'A', BUFSIZE-1), buf1[BUFSIZE-1] = '\0';
  printf("Before overflow: buf1=%s\n", buf1);

  memset(buf0, 'B', (int)(b_diff + OVERSIZE));
  printf("After overflow:  buf1=%s\n", buf1);
}
