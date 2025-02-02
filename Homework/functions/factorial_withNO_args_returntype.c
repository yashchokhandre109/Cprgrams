#include<stdio.h>
void factorial(){
    int fact=1,sum=0,i,div;
    for ( i = 1; i <=5 ; i++)
    {
        fact=fact*i;
        div=fact/i;
        sum=sum+div;
    }
    printf("sum of factorial is %d",sum);
}
void main()
{
    factorial();
}