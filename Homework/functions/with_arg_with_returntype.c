#include<stdio.h>
int add(int x, int y){
int result;
result=x+y;
return result;
}
void main(){
    int a=2,b=5;
    int r;
    r=add(a,b);
    printf("addition is %d",r);
}
