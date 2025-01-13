#include <stdio.h>
void main()
{
 int num, product=1,i=1;
printf("Enter the number");
scanf("%d", &num);

while(i<=num)
{
    product=product*i;
    i++;
}
printf("The product of numbers from is %d\n", product);
}