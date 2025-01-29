#include<stdio.h>
void main()
{
    char name[20],*p1,l=0;
    printf("Enter the name");
    scanf("%s",name);
    for (p1=&name[0];*p1!='\0'; p1++)
    {
        l++;
    }
    printf("The length of string is %d",l);

}