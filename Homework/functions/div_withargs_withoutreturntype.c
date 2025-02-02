#include<stdio.h>
void div(int x,int y){
    int result;
    result=x/y;
    printf("%d",result);
}
void main(){
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    div(a,b);
}