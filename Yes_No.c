#include<stdio.h>
#include<stdbool.h>
int main ()
{
  int n;
  bool x = true;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n;i++)
  {
    scanf("%d",&a[i]);
  }
  for (int i = 0; i < n;i++)
  {
    if (a[i]!=a[0])
    {
      x = false;
      break;
    }
    
  }
  if (x)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
 
  return 0;
}