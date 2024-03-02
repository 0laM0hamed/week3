#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    printf("enter the ending number");
    scanf("%d",&n);
for (i=1;i<=n;i++)
  {
      sum =sum+i;
  }
  printf("sum of natural numbers from 1 to %d equal %d",n,sum);
    return 0;
}
