#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a[3][3];
  int b[3][3];
  int c[3][3];
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      a[i][j] = rand() % 5;
      printf("A: %d ", a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      b[i][j] = rand() % 5;
      printf("B: %d ", b[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      c[i][j] = a[i][j] + b[i][j];
      printf("C: %d ", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}
