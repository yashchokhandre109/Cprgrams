#include<stdio.h>
void main()
{
    int i=1,odd,sum=0,num;
    printf("Enter the number");
    scanf("%d",&num);
    while (i<=num)
    {
        odd=2*i-1;
        printf("%d\n",odd);
        sum=sum+odd;
        i++;
    }
    printf("sum of odd natural numbers is%d",sum);

}