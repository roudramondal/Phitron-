#include<stdio.h>
int main ()
{
  int x;
  printf("enter any number = ");
  scanf("%d", &x);
  if (x%2==0)
  {
    printf("Number is Even= %d\n", x);
  }
  else
  {
    printf("Number is Odd = %d\n", x);
  }
  return 0;
}