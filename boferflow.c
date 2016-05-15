#include <stdio.h>
#include <string.h>

void copyData(char *userId) {
  char smallBuffer[10];
  strcpy(smallBuffer, userId);
}

void copyDataSafer(char *userId) {
  char smallBuffer[10];
  strncpy(smallBuffer, userId, 10);
  smallBuffer[9] = 0; // make sure to terminate
}

int main(int argc, char *argv[]) {
  char *userId = "01234567890";
  printf("first try\n");
  copyDataSafer(userId); // trying to copy 11 byts into 10 byte array
  printf("overflow\n");
  copyData(userId); // trying to copy 11 byts into 10 byte array
}
