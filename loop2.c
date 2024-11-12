#include<stdio.h>
int main ()
{
  int a;
  printf("Enter the number= ");
  scanf("%d",&a);
  // int i = 0;
  // while (i < a)
  // {
  //   printf("Hello\n");
  //   i++;
  // }
  for (int i = 2; i <= a; i=i+2)
  {
    printf("%d Hello\n",i);
  }

    return 0;
}