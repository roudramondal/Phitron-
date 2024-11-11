#include<stdio.h>
int main ()
{
  int x, a, b;
  printf("enter the three value = ");
  scanf("%d %d %d", &x, &a, &b);
  if (x%2==0)
  {
    printf("value of the sum= %d", a + b);
  }
  else 
  {
    printf("value of the sum = %d", a - b);
  }
  return 0;
}