#include<stdio.h>
void main()
{
    int a,b,c;
    a=2,b=3;
    c=a;
    a=b;
    b=c;
    printf("After swapping value of a is %d and value of b is %d", a,b);
}