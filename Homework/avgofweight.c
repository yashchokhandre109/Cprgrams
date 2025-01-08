#include<stdio.h>
void main()
{
    float w1,w2,p1,p2,avg;
    printf("Enter the wieght & purchase w1&p1");
    scanf("%f%f",&w1,&p1);
    printf("Enter the wieght & purchase w2&p2");
    scanf("%f%f",&w2,&p2);
    avg=(w1*p1+w2*p2)/2;
    printf("avg value of the items is %f ",avg);

    
}