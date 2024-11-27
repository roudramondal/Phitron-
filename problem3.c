#include<stdio.h>
#include<stdbool.h>
int main ()
{
  int n;
  int f = true;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n;i++)
  {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n;i++)
  {
    if (a[i]!=a[0])
    {
      f = false;
      break;
    }
  }
  if (f)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
  return 0;
}