#include<stdio.h>
int main ()
{
  int n;
  printf("Enter the number of chocolate= ");
  scanf("%d", &n);
  int cho = n;
  int pack = n;
  // int i = 0;
  while (pack>=4)
  {
    cho += (pack / 4);
    pack = (pack / 4) + (pack % 4);
    //pack++;
  }
  printf("%d", cho);
  return 0;
}