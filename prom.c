#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int a[n][n];
  for(int i = 0; i < n; i++) {
    double sum = 0.0;
    for(int j = 0; j < n; j++) {
      a[i][j] = rand() % 5;
      printf("%d ", a[i][j]);
      sum += a[i][j];
    }
    double prom = sum / n;
    printf("Prom: %.2f\n", prom);
    printf("\n");
  }
  return 0;
}
