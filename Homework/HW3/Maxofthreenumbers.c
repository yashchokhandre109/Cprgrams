#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("A is maximum%d",a);
    }
    else if (b>c && b>a)
    {
        printf("B is maximum%d",b);
    }
    else
    {
        printf("C is maximum%d",c);
    }

}