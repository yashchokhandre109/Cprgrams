#include<stdio.h>
void main()
{
    int a,b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("Enter the value of a and b");
    scanf("%d%d",p1,p2);
    if (*p1>=*p2)
    {
       printf("%d is greater",*p1);
    }
    else{
        printf("%d is greater",*p2);
    }
    
}