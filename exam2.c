#include<stdio.h>
int main()
{
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int Largest;
  
  if (a>b&&a>c&&a>d)
  {
    Largest = a;
  }
  else if (b>a&&b>c&&b>d)
  {
    Largest = b;
  }
  else if (c>a&&c>b&&c>d)
  {
    Largest = c;
  }
  else 
  {
    Largest = d;
  }
  int Smallest;
  if (a<b&&a<c&&a<d)
  {
   Smallest = a;
  }
  else if (b<a&&b<c&&b<d)
  {
    Smallest = b;
  }
  else if (c < a && c < b && c < d)
  {
    Smallest = c;
  }
  else  
  {
    Smallest = d;
  }
  printf("Largest = %d\n", Largest);
  printf("Smallest = %d", Smallest);

  return 0;
}