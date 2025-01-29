#include<stdio.h>
void main()
{
    char str[20], *p1;
    int v=0,c=0,l=0;
   

    printf("Enter the string");
    scanf("%s\n",str);
     p1=&str[0];
    for (    ;*p1!='\0'; p1++)
    
    {
        l=l+1;
        
        if (*p1=='a'||*p1=='e'||*p1=='i'||*p1=='o'||*p1=='u')
        {
            v=v+1;
        }
        else
        {
            c=c+1;
        }
        
    }
    printf("%d\n",l);
    printf("The number of vowels is %d\n",v);
    printf("The number of consonants is %d\n",c);

}