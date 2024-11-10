#include<stdio.h>
int main ()
{
  int a, b, c;
  printf("enter the three number = ");
  scanf("%d %d %d", &a, &b, &c);
  if(a>b&&a>c)
  {
    printf("Large value is a = %d\n", a);

  }
  else if (a<b&&c<b)
{
  printf("large value is b = %d\n", b);
}
else if (c>a&&c>b)
{
  printf("large valuee is c = %d\n", c);
}
else 
{
  printf("three values are equal\n");
}
return 0;
}