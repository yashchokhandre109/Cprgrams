#include<stdio.h>
void mul(int x, int y){
    int result;
    result=x*y;
    printf("%d",result);
  
}
void main(){
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    mul(a,b);
}