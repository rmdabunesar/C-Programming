#include <stdio.h>

int main() {

  int test[2][2];

  printf("Enter 4 values: \n");

  for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 2; ++j)
    {
      scanf("%d", &test[i][j]);
    }
  }

  printf("Displaying array values:\n");
  for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 2; ++j)
    {
      printf("test[%d][%d] = %d\n", i, j, test[i][j]);
    }
  }

  return 0;
}