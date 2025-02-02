#include<stdio.h>
int div(){
    int a,b,result;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    result=a/b;
    return result;
}
void main(){
    int r;
    r=div();
    printf("%d",r);
   
}