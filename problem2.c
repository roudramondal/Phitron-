#include<stdio.h>
int main ()
{
  int n;
  scanf("%d", &n);
  int a[n];
  for ( int i = 0; i < n;i++)
  {
    scanf("%d", &a[i]);
  }
  int key;
  scanf("%d", &key);
  for ( int i = 0; i < key;i++)
  {
    int i, k;
    scanf("%d %d", &i, &k);
    a[i] += k;
    
  }
  for (int i = 0; i < n;i++)
  {
    printf("%d ", a[i]);
  }
}