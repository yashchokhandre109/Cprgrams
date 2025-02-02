#include <stdio.h>

void armst(int num)
{
int rev,d,result=0;
printf("Enter a number:-");
scanf("%d", &num);
int org=num;

while(num>0)
{
    
rev=d/10;
d=num%10;
result=result+ (d*d*d);
num=num/10;

}
printf("%d", result);

if(result==org)
{
    printf("the %d is armstrong number", org);
}
else{
    printf("the %d is not a armstrong number", org);
}

}

void main()
{
    int n1=0;
    armst(n1);
}