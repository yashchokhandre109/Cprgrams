#include<stdio.h>
void main()
{
int a [5],i,*p,sum=0;
p=&a[0];
printf("Enter the elements");
for ( i = 0; i < 5; i++)
{
    scanf("%d",p+i);
}
for(i=0;i<5;i++)
{
    sum=sum+*p;
    p++;
}
printf("sum of elements is %d ",sum);

}
