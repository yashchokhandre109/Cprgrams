#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a");
    scanf("%d",&a);
    if (a%5==0 && a%11==0)
    {
        printf("the number %d is divisible by 5 and 11",a);
    }
    else {
        printf("the number %d is not divisible by 5 and 11",a);
    }   

}