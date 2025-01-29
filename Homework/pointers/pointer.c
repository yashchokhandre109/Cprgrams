#include<stdio.h>
void main()
{
    int a=2;
    int * p;
    p=&a;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%d\n",*(&a));

    printf("%d\n", p); //address of p
}