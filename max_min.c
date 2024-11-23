#include<stdio.h>
int  main ()
{
  int a[] = {23, 4, 55, 67};
  int max = a[0];
  for (int i = 0; i < 4;i++)
  {
    if (a[i]<max)//when i use > it gives u maximum value and when i use < it gives minimum value from the array
      max=a[i];
  }
  printf("%d\n", max);
  return 0; 
}