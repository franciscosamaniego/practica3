#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int a[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      int r = rand() % 5;
      a[j] += r;
    }
  }
  for(int i = 0; i < n; i++) {
    a[i] = a[i]/n;
    printf("%d\n", a[i]);
  }
  return 0;
}
