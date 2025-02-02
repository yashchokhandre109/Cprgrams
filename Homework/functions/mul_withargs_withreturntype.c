#include<stdio.h>
int mul(int x,int y){
    int result;
    result= x*y;
    return result;
}
void main(){
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    int r;
    r=mul(a,b);
    printf("%d",r);
}