#include<stdio.h>
int main ()
{
  // find the area of a circal
  int r;
  printf("enter the redius of a circal= ");
  scanf("%d", &r);
  printf("\n");
  float area = 3.1416 * r * r;
  printf("The area of a circal is = %f", area);
  return 0;
}