#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    printf("enter the month number\n");
    scanf("%d",&month);
    if (month==4||month==6||month==9||month==11)
    {
        printf("30 days");

    }
    else if (month==2)
    {
        printf("28 or 29 days");

    }
    else
    {
        printf("31 days");
    }
    return 0;
}
