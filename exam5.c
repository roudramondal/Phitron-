#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  //int i = 0;
  for (int i = n; n >= 1;i++)
  {
    printf(" %d ", n);
    if (n%2==0)
    {
      n = n / 2;
    }
    else 
    {
      n = n - 1;
    }
     
  }
   
}