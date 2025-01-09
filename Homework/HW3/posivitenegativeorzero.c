#include<stdio.h>
void main()
{
    int num1;
    printf("Enter the value of num1");
    scanf("%d",&num1);
    if (num1>0)
    {
       printf("the number %d is positive ",num1);
    }
    else if (num1<0)
    { 
        printf("the number %d is negative ",num1);
    }
    else{
        printf("the number %d is zero",num1);
    }
    
}