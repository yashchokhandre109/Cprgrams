#include<stdio.h>
int sub(int x,int y){
    int result;
    result=x-y;
    return result;
}
void main(){
    int a=6,b=4;
    int r;
    r =sub(a,b);
    printf("%d",r);
}