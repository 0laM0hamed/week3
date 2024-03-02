#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,res;
    char op;
   printf("enter num1 ,op ,num2\n");
   scanf ("%f%c%f",&x,&op,&y);
   switch (op)
   {
   case '+':
    res = x+y;
    break;
   case '-':
    res = x-y;
    break;
    case'*':
    res =x*y;
    break;
    case '/':
    res=x/y;
    break;
   }
printf("result is %f",res);

    return 0;
}
