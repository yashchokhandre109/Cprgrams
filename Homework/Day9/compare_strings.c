#include<stdio.h>
#include<string.h>

void main()
{
    char str1[]="yash";
    char str2[]="yash";
    char str3[]="hi";

    printf("%s\n",strcmp(str1, str2));
    printf("%s\n",strcmp(str1, str3));
}