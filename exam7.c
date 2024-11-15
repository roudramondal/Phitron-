#include<stdio.h>
int main ()
{
  int a, b;
  // int reult = 0;
  scanf("%d %d", &a, &b);
  int x = a;
  int y = b;
  while (b != 0)
  {
    int result = a % b;
    a = b;
    b = result;
  }
  printf("The GCD of %d and %d is %d", x, y, a);
}