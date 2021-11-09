#include <stdio.h>
#include <stdlib.h>

void blob_count(int [][5], int, int, int*, int);

int main(void) {
  int x = 0,
      y = 0;
  int done = 0,
      count;
  
  do {
    int grid[5][5] = {
      {1, 1, 0, 0, 0},
      {0, 1, 1, 0, 0},
      {0, 0, 1, 0, 1},
      {1, 0, 0, 0, 1},
      {0, 1, 0, 1, 1}
    };
    count = 0;
    blob_count(grid, y, x, &count, 0);
    printf("%d ", count);
    x = ((x + 1) % 5);
    if (x == 0) {
      y = ((y + 1) % 5);
      printf("\n");
    }
    if (x == 0 && y == 0)
      done = 1;
  } while (!done);
  return EXIT_SUCCESS;
}

void blob_count(int grid[][5], int x, int y, int *score, int round) {
  int i, j;
  if (grid[x][y] == 1) {
    grid[x][y] = 0;
    (*score)++;
    for (i = (x-1); i <=(x+1) ; i++) {
      for (j = (y-1); j <= (y+1); j++) {
        if (!(i < 0 || i > 4 || j < 0 || j > 4)) {
          if (grid[i][j] == 1) {
            blob_count(grid, i, j, score, round + 1);
          }
        }
      }
    }
  }
}