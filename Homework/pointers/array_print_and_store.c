#include<stdio.h>
void main()
{
    char n[20];
    int i;
    int *p1=n;

    printf("Enter the number of elements");
    scanf("%d",&n);

    printf("Enter the elements\n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",n[i]);
    }
    printf(" elements in array\n",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",*(p1+i));
    }
    




    


}