#include<stdio.h>
int main ()
{
  // 2d array index
  int row = 4, col = 3;
  for (int i = 0; i <= row - 1;i++)
  {
    for (int j = 0; j <= col - 1;j++)
    {
      printf("%d,%d ",i,j);
    }
    printf("\n");
  }
  return 0;
}