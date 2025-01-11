#include <stdio.h>
void main(){
    int n, i,sum=0;
        printf("enter the number");
        scanf("%d", &n);
    
    for(i=1;i<=n;i++)
    {
        printf("\n%d", 2*i-1);
        sum=2*i-1;
    
    }
    printf("\n sum of odd numbers are:- %d",sum);
}