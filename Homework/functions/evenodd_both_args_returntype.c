#include <stdio.h>
int evenodd(int num)
{
if(num % 2 == 0)
{
    return 1;
}
else{
    return 0;
}
}
void main()
{
    int input,r;
    printf("Enter the number");
    scanf("%d", &input);

    r=evenodd(input);

    if(r==1)
    {
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
}