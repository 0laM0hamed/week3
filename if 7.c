#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter he character\n");
    scanf("%c",&ch);
    if (ch>='a'&&ch<='z'|| ch>='A'&&ch<='Z')
        {
            printf("the character is an alphabet");
        }
        else
            {
                 printf("the character is not an alphabet");
            }
    return 0;
}
