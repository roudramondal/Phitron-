#include<stdio.h>
int main ()
{
  int n,j,k;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n;i++)
  {
    scanf("%d", &a[i]);

  }
  int x;
  scanf("%d", &x);
  
  for (int j = 0; j < x;j++)
  {
    int i, v;
    scanf("%d %d", &i, &v);

   if (i>=0&&i<n)
     a[i] += v;
  }
  for (int i = 0; i < n;i++)
  {
    printf("%d ", a[i]);
  }
}