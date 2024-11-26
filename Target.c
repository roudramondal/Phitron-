#include<stdio.h>
#include<stdbool.h>
int main ()
{
  bool x = false;
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n;i++)
  {
    scanf("%d", &a[i]);
  }
  int key;
  scanf("%d",&key);
  for (int i = 0; i < n;i++)
  {
    for (int j = i+1; j <= n;j++)
    {
      if(a[i]+a[j]==key)
      {
        x = true;
        break;
      }
    }
  }
  if (x)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
}