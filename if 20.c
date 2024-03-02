#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,hra,da,gross;

    printf("enter the basic salary\n");
    scanf("%f",&x);
    if (x<=1000)
    {
        hra = 0.2*x;
        da=0.8*x;
    }
    else if(x>1000&&x<2000)
    {
        hra =0.25*x;
        da = 0.9*x;
    }
    else
    {
        hra=0.3*x;
        da =0.95*x;
    }
    gross=x+hra+da;
    printf("Gross equal %f",gross);
        return 0;
}
