#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int matriz[15][15];
  bool win = false;
  srand(time(NULL));
  for(int i = 0; i < 15; i++) {
    for(int j = 0; j < 15; j++) {
      matriz[i][j] = 0;
    }
  }
  //posicion del walker
  int x = 7;
  int y = 7;
  int k = 1;
  matriz[x][y] = k;

  for(int i = 0; i < 100; i++) {
      int r = rand() % 4;
      if(r == 0 && matriz[x+1][y] == 0) { x++; k++; }
      if(r == 1 && matriz[x][y+1] == 0) { y++; k++; }
      if(r == 2 && matriz[x-1][y] == 0) { x--; k++; }
      if(r == 3 && matriz[x][y-1] == 0) { y--; k++; }
      if(x > 14 || x < 0 || y > 14 || y < 0) {
        win = true;
        break;  //sale del for
      }
      matriz[x][y] = k;
}
  for(int i = 0; i < 15; i++) {
    for(int j = 0; j < 15; j++) {
      printf("%02d ", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n%s\n", win ? "ganaste" : "perdiste");
return 0;
}
