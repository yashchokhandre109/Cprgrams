#include <stdio.h>
void main()
{
    printf("nested while loop\n");
    int i=1,j;

    while (i<=5)
    {
        j=1;
        while (j<=i)
        {
              printf("* ");
              j++;
        }
        printf("\n");
        i++;
    }
    

}