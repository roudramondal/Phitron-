#include<stdio.h>
int main ()
{
  char str[] = "programming";
  int i = 0;
  while (str[i]!='\0')
  {
    printf("%c", str[i]);
    i += 1;

  }
  printf(".");
  return 0;
}
