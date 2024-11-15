#include<stdio.h>
int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  int x = a;
  int y = b;
  while (b!=0)
  {
    int result = a % b;
    a = b;
    b = result;
  
  }
  int result2 = (x * y) / a;
  printf("The LCM of %d and %d is %d", x, y, result2);
  return 0;
}