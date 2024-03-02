#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float a,b,c,root1,root2,dis;
    printf("enter the coefficients");
    scanf("%f%f%f",&a,&b,&c);
    dis = (b*b)-(4*a*c);
  switch(dis >0)
    {
        case 1:
        root1= (-b+ sqrt(dis))/(2*a) ;
        root2= (-b- sqrt(dis))/(2*a) ;
        printf(" two real roots %f and %f",root1,root2);
        break;
        case 0:

          switch (dis<0)
           {
           case 0:

               root1=-b/(2*a);
               root2=root1;
               printf("one real root %f",root1);
               break;

           case 1:
            root1=(-b/(2*a))+((-sqrt(dis)/(2*a)));
            root2=(-b/(2*a))-((-sqrt(dis)/(2*a)));
            printf("two complex roots %f and %f",root1,root2);
            break;

           }

    }
    return 0;
}
