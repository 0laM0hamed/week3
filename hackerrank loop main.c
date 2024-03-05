#include <stdio.h>
#include <stdlib.h>

static const char*numbers[] = {"one","two""three","four","five","six","seven","eight","nine"};
int main()
{
    int a,b,i;
    printf("the interval start and end\n");
    scanf("%d%d",&a,&b);
    for (i=a;i>=a&&i<=b;i++)
    {
        if (i>=1&&i<=9)
        {
            printf("%s\n",numbers[i-1]);
        }
        else if(i>9&&i%2==0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
    }

    return 0;
}
