#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float product=1;
    printf("enter the number\n");
    scanf("%d",&x);
    while(x%10>0)
    {

        product= product*(x%10);
        x=x/10;
    }
    printf("%f",product);
    return 0;
}
