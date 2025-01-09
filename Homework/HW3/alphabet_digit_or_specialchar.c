#include <stdio.h>
void main()
{
    char ch;
    printf("Enter the character");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        printf("The character %c is alphabet",ch);
    }
    else if (ch>='0' && ch<='9')
    {
        printf("The character is number");
    }
    else
    {
        printf("The character is special character");
    }
    }