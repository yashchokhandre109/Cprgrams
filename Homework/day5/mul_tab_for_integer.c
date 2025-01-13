#include<stdio.h>
void main()
{
    int n,i=1,mul=0;
    printf("Enter the number ");
    scanf("%d",&n);
    while (i<=10)
    {
        mul=n*i;
        printf("%d\n",mul);
        i++;
    }
    

}
