#include<stdio.h>
int main ()
{
  int a, b;
  printf("enter the two number a and b = ");
  scanf("%d %d", &a, &b);
  if(a>b)
{
  printf("A is grather than B= %d\n", a);
}
else if (a<b)
{
  printf("B is grather than A= %d\n", b);
}
else 
{
  printf("Both are same a=%d and b = %d\n", a, b);
}

  return 0;
}