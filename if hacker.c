#include <stdio.h>
#include <stdlib.h>
static const char*number[]={"one","two","three","four","five","six","seven","eight","nine"};
int main()
{
    int i;
    printf("enter the number\n");
    scanf("%d",&i);
    if (i<=9)
    {
        printf("%s",number[i-1]);
    }
    else
    {
        printf("greater than nine");
    }
    return 0;
}
