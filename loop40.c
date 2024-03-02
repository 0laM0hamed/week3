#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define BASE 2

int main()
{
    int x,dec=0,n=0;
   printf("enter the number in binary\n");
   scanf("%d",&x);
   while(x>0)
   {
       if (x%10==1)
       {
           dec+=pow(BASE,n);

       }
       n++;
       x/=10;
   }
   printf("decimal number is %d",dec);
    return 0;
}
