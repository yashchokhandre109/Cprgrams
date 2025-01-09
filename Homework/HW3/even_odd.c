#include<stdio.h>
void main()
{
    int a;
    printf("Enter the values of a");
    scanf("%d",&a);
    if (a%2==0)
    {
       printf("the is number %d is even",a);
    }
    else{
        printf("the number %d is odd",a);
    }
    
}