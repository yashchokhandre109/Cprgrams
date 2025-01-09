#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the values of a and b");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("A is maximum %d",a);
    }
    else{
        printf("B is maximum %d",b);
    }
    
}