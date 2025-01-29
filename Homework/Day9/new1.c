#include<stdio.h>
void main()
{
    char name[20];
    int i;
    printf("Enter your name");
    
   
    for (i=0;name[i]!='\0'; i++)
    {
        scanf("%c",&name[i]);
    }
    for (i=0;name[i]!='\0'; i++)
    {
        printf("%c",name[i]);
    }
    
}