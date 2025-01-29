#include<stdio.h>
void main()
{
    int a=8,b=4,result;
    int *p1,*p2;
     p1=&a;
     p2=&b;

     result=*p1-*p2;

     printf("substraction of two numbers is%d",result);
}