#include<stdio.h>
void main()
{
    int i,num,sum=0;
    printf("Enter the value of num");
    scanf("%d",&num);
    for ( i = 1; i <=num; i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("sum of n natural numbers are%d",sum);

}