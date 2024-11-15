#include<stdio.h>
int main ()
{
  int n;
  scanf("%d", &n);
  int a = n;

  for (int i = 1; i <= n;i++)
  {
    if (n % i == 0)
    {
      printf("%d", i);
      if (i<n)
      {
        printf(", ");
      }
      else 
      {

      }
      
    }
    else 
    {

    }
  }
  printf(".");
  return 0;
}