#include<stdio.h>
int main ()
{
  int n;
  scanf("%d", &n);
  int count=0;
  if (n>=0)
  {
    count = n % 10;
  }
  else 
  {

  }
  printf("%d", count);
}