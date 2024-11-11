 #include<stdio.h>
 int main ()
 {
   int a, b, c;
   scanf("%d %d %d",&a,&b,&c);
   if (a>b&&a>c)
    {
      printf("A is bigger\n");
     
    }
    else if (b>a&&b>c)
    {
      printf("B is bigger\n");
    }
    else if (c>a&&c>b)
    {
      printf("C is bigger\n");
    }
    else if (a==b&&b==c)
    {
      printf("They are equal\n");
    }
    
    else if (a==c)
    {
      printf("A and C both are equal\n");
    }
    else if (a==b)
    {
      printf("A and B both are equal\n");
    }
    else if (b==c)
    {
      printf("B and C both are equal\n");
    }
    
    return 0;
 }