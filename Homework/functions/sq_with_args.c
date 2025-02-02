#include <stdio.h>
void square(int x)
{
    int sq;
    sq=x*x;
    printf("the square of given is %d",sq);
}
void main()
{
int a;
    printf("enter a number");
    scanf("%d", &a);
    square(a);
}