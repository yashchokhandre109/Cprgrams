#include <stdio.h>
void main()
{
    char x;
    printf("enter the character:-");
    scanf("%c", &x);
    if(x>='A' && x<= 'Z')
    {
        printf("the character %c is upper case ");
    }
    else
    {
        printf("the charcter %c is lower case");
    }
}