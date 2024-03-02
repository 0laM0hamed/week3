#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;
printf("enter the number\n");
scanf("%d",&x);
while((x%10)>0)
{

    printf("%d",(x%10));
    x=x/10;
}

    return 0;
}
