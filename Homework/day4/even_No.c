#include <stdio.h>
void main(){
    int num, i,sum;
        printf("enter the number:-");
        scanf("%d", &num);
    
    for(i=1;i<=num;i++)
    {   if (i % 2 ==0)
    {
        printf("\n%d", i);
        sum=sum+i;
    }
    }
    printf("\n sum of odd numbers are:- %d",sum);
}