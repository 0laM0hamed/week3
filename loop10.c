#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,count;
   printf("enter the number\n");
   scanf("%d",&x);
   do
   {
       count++;
       x/=10;
   } while (x>0);


   printf("%d",count);
    return 0;
}
