 #include <stdio.h>
void main()
{
    int a[3][3] , b[3][3], sub[3][3], i,j;


printf("Enter the first element of the matrix");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

printf("Enter the element of the second matrix");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    {
        sub[i][j]= a[i][j] - b[i][j];
    }
}

printf("substraction of the two matrix is");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
}