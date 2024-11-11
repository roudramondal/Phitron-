#include<stdio.h>
int main ()
{
  int a;
  scanf("%d", &a);
  if (a>=0&&a<32)
  {
    printf("F\n");
  }
  else if (a >=33&&a<=39)
  {
    printf("D\n");
  }
  else if (a>=40&&a<=49)
  {
    printf("C\n");
  }
  else if (a>=50&&a<=59)
  {
    printf("B\n");
  }
  else if (a>=60&&a<=69)
  {
    printf("A-\n");
  }
  else if (a>=70&&a<=79)
  {
    printf("A\n");
  }
  else if (a>=80&&a<=100)
  {
    printf("A+\n");
  }
  return 0;
}