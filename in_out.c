#include<stdio.h>
int main()
{
  int a[5];
  printf("input the  value= ");
  for (int i = 0; i < 5;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("output of the array= ");
  for (int i = 0; i < 5;i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
}