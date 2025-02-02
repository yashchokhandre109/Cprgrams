#include <stdio.h>
int evenodd()
{
    int num;
    printf("Enter a number");
    scanf("%d", &num);

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
int r=evenodd();

if(r==1){
    printf("The number is even");
}
else{
    printf("The number is odd");
}
}