#include <stdio.h>
void main()
{
    int i,j,a[3][3] , b[3][3], sum[3][3];

    printf("enter elements of first array:-");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
printf("enter the elements of second array:-");

 for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for ( i = 0; i <3; i++)
    {
        for(j=0;j<3;j++){
             
             sum[i][j]=a[i][j]+b[i][j];
             printf("%d",sum[i][j]);
        }

    printf("\n");
    }
    
}