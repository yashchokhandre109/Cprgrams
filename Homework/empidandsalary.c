#include<stdio.h>
void main()
{
    int id;
    float salary,hour,amount;
    printf("enter the employee id");
    scanf("%d",&id);
    printf("enter the no. of hours workedn per day");
    scanf("%f",&hour);
    printf("enter the amount you recieve per hour");
    scanf("%f",&amount);
    salary=amount*hour;
    printf("employee's id %d and salary of a particular month %.2f",id ,salary);
}