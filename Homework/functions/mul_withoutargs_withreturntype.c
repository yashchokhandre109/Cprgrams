#include<stdio.h>
int mul(){
    int a,b,result;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    result=a*b;
    return result;
}
void main(){
    int r;
    r=mul();
    printf("%d",r);
    
}