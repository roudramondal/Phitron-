#include<stdio.h>
int main ()
{
  for (int j = 1; j <= 7;j++)
  {
    printf("*");
  }
  printf("\n");
  for (int i = 1; i <= (7 - 2);i++)
  {
    printf("*");
    for (int j = 1; j <= 7-2;j++)
    {
      printf(" ");
    }
    printf("*\n");
  }
  for (int j = 1; j <= 7;j++)
  {
    printf("*");
  }
  printf("\n");
  return 0;
}