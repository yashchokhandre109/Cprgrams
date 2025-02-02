#include<stdio.h>
int sub(){
    int a = 4,b=4,result;
    result=a-b;
    return result;
}
void main(){
    int r;
    r=sub();
    printf("%d",r);
}