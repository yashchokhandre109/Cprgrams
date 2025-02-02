#include <stdio.h>
void evenodd(int num)
{
    if(num % 2 == 0)
    {
       printf("The number is even");
    }
    else{
      printf("The number is odd");
    }
}
void main()
{
    int input;
    printf("Enter a number");
    scanf("%d", &input);
    evenodd(input);
}