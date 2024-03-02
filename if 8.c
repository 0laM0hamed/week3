#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    printf("enter the character \n");
    scanf("%c",&y);
    if (y>='a'&&y<='z'||y>='A'&& y<='Z')

    {
       if (y=='o'||y=='u'||y=='e'||y=='a'||y=='i'||y=='O'||y=='U'||y=='E'||y=='A'||y=='I')
       {
           printf("y is vowel");
       }
       else
       {
           printf("y is consnant");
       }
    }

    return 0;
}
