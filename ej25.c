#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  double p = atof(argv[2]);
  int a[n+2][n+2];
  for(int i = 0; i < n+2; i++) {
    a[0][i] = 0;
    a[n+1][i] = 0;
    a[i][0] = 0;
    a[i][n+1] = 0;
  }
  for(int i = 1; i < n+1; i++) {
    for(int j = 1; j < n+1; j++) {
      int r = rand() % 100;
      double mina = r/100.0;
      if(mina <= p)    a[i][j] = 9;
      else           a[i][j] = 0;
    }
  }
  for(int i = 0; i < n+2; i++) {
    for(int j = 0; j < n+2; j++) {
      if(a[i][j] == 0) {
        int count = 0;
        if(a[i-1][j-1] == 9) count++;
            if(a[i][j-1] == 9)   count++;
            if(a[i+1][j-1] == 9) count++;
            if(a[i+1][j] == 9)   count++;
            if(a[i+1][j+1] == 9) count++;
            if(a[i][j+1] == 9)   count++;
            if(a[i-1][j+1] == 9) count++;
            if(a[i-1][j] == 9)   count++;
            a[i][j] = count;
      }
    }
  }
  for(int i = 0; i < n+2; i++) {
    for(int j = 0; j < n+2; j++) {
      if(a[i][j] == 9)     printf("* ");
      else                 printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
