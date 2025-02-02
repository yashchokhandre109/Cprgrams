#include<stdio.h>
void sub(int x,int y){
    int result;
    result=x-y;
    printf("%d",result);
}
void main(){
    int a=5,b=2;
    sub(a,b);
}