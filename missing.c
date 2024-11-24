#include<stdio.h>
int main ()
{
  int n, x;
  int a[20000];
  int i;
  scanf("%d", &n);
  for (i = 1; i < n;i++)
  {
    scanf("%d", &x);
    a[x] = 1;
  }
  for (i = 1; i <= n;i++)
  {
    printf("tasting %d position \n",i);
    if (a[i]==0)
    {
      printf("%d\n", i);
      break;
    }
  }
  return 0;
}