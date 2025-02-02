#include <stdio.h>
void prime()
{

 int num,i, count=0;
printf("enter a number");
scanf("%d", &num);
for(i=1;i<=num;i++)
{
    if(num % i==0 )
    {
       count++;
    }
}

printf("%d\n ", count);

if(count==2)
{
    printf("The number is prime");
}
else{
    printf("The number is not prime");
}
}

void main()
{
    prime();
}

