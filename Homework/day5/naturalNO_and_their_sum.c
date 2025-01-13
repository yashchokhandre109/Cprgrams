#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter the number ");
    scanf("%d",&n);
    int i=1;
    while (i<=n)
    {
        printf("%d\n",i);
        sum=sum+i;
        i++;
    }
    printf("sum of the n natural numbers is%d",sum);

}
