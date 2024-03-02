#include <stdio.h>
#include <stdlib.h>

int main()
{
   float x,y,z, sum, per;
printf(" enter the marks in three subjects\n");
scanf("%f%f%f",&x,&y,&z);
sum = x+y+z;
per= sum/3;
if (per>=90)
{
    printf("A");

}
else if (per>=80)
{
    printf("B");

}
    else if (per>=70)
    {
        printf("C");

    }
    else if (per>=60)
    {
        printf("D");

    }
    else if (per>=50)
    {
        printf("E");
    }
    else
    {
        printf("F");
    }
    return 0;
}
