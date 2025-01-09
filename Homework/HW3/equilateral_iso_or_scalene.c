#include <stdio.h>
void main()
{
    int a ,b, c;
    printf("enter the side of the triangle");
    scanf("%d",&a);
    printf("enter the side of the triangle");
    scanf("%d",&b);
    printf("enter the side of the triangle");
    scanf("%d",&c);
    if(a+b>c && b+c>a && c+a>b)
    {
        if(a==b && b==c)
        {
        printf("The triangle is a equilateral triangle\n");
        }
        else if((a==b && a==c || b!=c) || (b==c && b==a || c!=a)|| (c==a && c==b || a!=b))
        {
        printf("The triangle is an isosceles triangle\n");
        }
        else if(a!=b && b!=c && c!=a)
        {
        printf("The triangle is a scalene triangle\n");
        }
        }
    else
    {
        printf("The given figure is not a triangle");
    }
}