#include<stdio.h>
void main()
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    if(year%4==0 && (year/100!=0 || year/400==0)){
        printf("the %d year is leap",year);
    }
    else{
        printf("the %d year is not leap",year);
    }
    
}