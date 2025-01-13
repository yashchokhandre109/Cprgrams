#include<stdio.h>
void main()
{
    int n,sum=0,avg,i=1;

    while (i<=10)
    {
        printf("Enter the number");
        scanf("%d",&n);;
        sum=sum+n;
        avg=sum/10;
        i++;
    }
    printf("The sum of the natural numbers are %d\n",sum);
    printf("The of the natural numbers are %d",avg);

}
