#include<stdio.h>
void main()
{
    int i=1,num,cube;
    printf("Enter the number");
    scanf("%d",&num);
    while (i<=num)
    {
        cube=i*i*i;
        i++;
        printf("The cube is %d\n",cube);
    }
    
}