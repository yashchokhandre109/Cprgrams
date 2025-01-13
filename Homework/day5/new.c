#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    while (num<0)
    {
        printf("Enter the positive number Try again!");
        scanf("%d",&num);
    }
    
}