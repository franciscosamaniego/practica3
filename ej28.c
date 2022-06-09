#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int a[n][n][n];
  int b[n][n][n];
  int c[n][n][n];
  for(int i = 0; i < n; i++) {
    a[i] = rand() % 3;
    printf("%d ", a[i]);
    b[i] = rand() % 3;
    printf("%d ", b[i]);
    c[i] = (a[i] * b[i]);
    printf("%d ", c[i]);
    for(int j = 0; j < n; j++) {
      a[i][j] = rand() % 3;
      printf("%d ", a[i][j]);
      b[i][j] = rand() % 3;
      printf("%d ", b[i][j]);
      c[i][j] = (a[i][j] * b[i][j]);
      printf("%d ", c[j]);
      for(int k = 0; k < n; k++) {
        a[i][j][k] = rand() % 3;
        printf("%d ", a[i][j][k]);
        b[i][j][k] = rand() % 3;
        printf("%d ", b[i][j][k]);
        c[i][j][k] = (a[i][j][k] * b[i][j][k]);
        printf("%d ", c[i][j][k]);
       }
      }
      printf("\n");
    }
    printf("\n");
  return 0;
}
