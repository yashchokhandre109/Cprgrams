#include <stdio.h>
void main()
{
    int sp, cp, profit,loss;
    printf("Enter the cost price");
    scanf("%d",&cp);
    printf("Enter the selling price");
    scanf("%d",&sp);
    profit=sp-cp;
    loss=cp-sp;
    printf("The profit is %d\n",profit);
    printf("The loss is  %d\n",loss);
}