#include<stdio.h>
int div(int x, int y){
    int result;
    result =x/y;
    return result;
}
void main(){
    int a=9,b=3;
    int r;
    r= div(a,b);
    printf("%d",r);
}