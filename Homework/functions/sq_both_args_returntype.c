#include <stdio.h>
int num(int x)
{ 
    int result;
    result=x*x;
    return result;
}

void main()
{

int a=7;
int r;
r= num(a);
printf("square of given number is %d", r);

}