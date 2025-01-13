#include<stdio.h>
void main()
{
    int i=1,even,sum=0,num;
    printf("Enter the number");
    scanf("%d",&num);
    while (i<=num)
    {
        even=2*i;
        printf("%d\n",even);
        sum=sum+even;
        i++;
    }
    printf("sum of even natural numbers is%d",sum);

}