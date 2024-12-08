#include<stdio.h>
int main ()
{
  // finding vowel in the string ;
  char nam[1000];
  fgets(nam, sizeof(nam), stdin); // better practice ;
  int i = 0, count = 0;
  while (nam[i]!='\0')
  {
    if (nam[i]=='a'||nam[i]=='e'||nam[i]=='i'||nam[i]=='o'||nam[i]=='u')
    {
      count++;
    }

    i++;
  }
  printf("vowel is =%d", count);

}