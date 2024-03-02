#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y,z;
    printf("enter the three sides\n");
    scanf("%d%d%d",&x,&y,&z);

    if (x==y&&y==z)
    {
        printf("this triangle is equilateral");
    }
    else if (x==y||y==z)
    {
        printf(" this triangle is isosceles");

    }
    else
    {
        printf(" this triangle is scalene");

    }
    return 0;
}
