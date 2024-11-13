#include<stdio.h>
int main ()
{
  int n;
  scanf("%d", &n);
  if (n>=0)
  {
    for (int i = 1; i <= n;i++)
    {
      printf("%d ",i);
    }
  }
  else 
  {
    while (n >= 0)
  {
    printf("%d",&n);
  }
  for (int i = 1; i >= n;i--)
{
  printf("%d ", i);
}
  }
    return 0;
}