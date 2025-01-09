#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the three angles of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
    {
        printf("The triangle is valid");
    }
    else
    {
        printf("The triangle is invalid");
    }
}