#include<stdio.h>
void mul(){
    int a,b,result;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    result = a*b;
    printf("%d",result);
}
void main(){
    mul();
}