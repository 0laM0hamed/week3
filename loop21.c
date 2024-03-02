#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,result=1;
    printf("enter the number\n");
    scanf("%d",&x);
    printf("enter the exponent\n");
    scanf("%d",&y);
    for (i=1;i<=y;i++)
    {
       result=result*x;
    }
    printf("%d",result);
    return 0;
}
