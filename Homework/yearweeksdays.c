#include<stdio.h>
void main()
{
    int y,w,inputdays,rdays,days;
    printf("Enter the no. of days");
    scanf("%d",&inputdays);
    y=inputdays/365;
    rdays=inputdays%365;
    w=rdays/7;
    days=rdays%7;
    printf("years %d weeks%d days%d", y,w,days);
}