#include<stdio.h>
void main()
{
    int i,j,len=0;
    char str[20];
    printf("Enter the name ");
    gets(str);

    for ( i = 0; str[i]!='\0'; i++)
    {
        len=len+1;
    }
    printf("%d\n",len);

    for ( j=len-1;str[j]!='\0'; j--)
    {
        printf("%c",str[j]);
    }
    
    
}