#include<stdio.h>
int main ()
{
  int n;
  int sum = 0;
  scanf("%d", &n);
  for (int i = 1; i <= n;i++)
  {
    int w;
    scanf("%d", &w);
    sum += w;
  }
  printf("%d", sum);

  return 0;
}