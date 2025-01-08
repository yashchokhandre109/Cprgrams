#include<stdio.h>
void main()
{
    char a,b,c,d;
    a='X';
    b='M';
    c='L';
    d=a;
    a=c;
    c=d;
    printf("%c%c%c",a,b,c);
}