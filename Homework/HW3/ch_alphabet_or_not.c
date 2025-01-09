#include <stdio.h>
void main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("the character  %c is an alphabet",ch);
    }
    else{
        printf("the character  %c is not an alphabet",ch);
    }
}