 #include<stdio.h>
int main ()
{
  int a;
  scanf("%d", &a);
  while (a>1)
  {
    printf(" %d ", a);
    if (a%2==0)
    {
       a = a / 2;
    }
    else 
    {
     a = 3 * a + 1;
    }
    
  }
    return 0;
}