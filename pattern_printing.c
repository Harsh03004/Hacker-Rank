#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  int n;
  scanf("%d", &n);
  int a[n][n];
  int i, j;
  for (i = 0; i < n * 2 - 1; i++)
  {
    for (j = 0; j < n * 2 - 1; j++)
    {
      a[i][j]=0;
    }
  }
   for (i = 0; i < n * 2 - 1; i++)
  {
    for (j = 0; j < n * 2 - 1; j++)
    {
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}