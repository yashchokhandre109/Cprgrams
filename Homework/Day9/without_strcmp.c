#include<stdio.h>
void main()
{
    char str1[20], str2[20];
    int i,j,isequal=1;

    printf("Enter first name");
    scanf("%s",&str1);

    printf("Enter second name");
    scanf("%s",&str2);
     
    for (i=0;str1[i]!='\0'; i++);
    {
        for (j=0;str2[j]!='\0' ; j++)
        {
        if (str1[i]!=str2[i])
        {
         isequal=0;
        }
        }
    }

    
      
      if (isequal==1)
      {
        printf("The strings are equal\n");
      }
      else{
        printf("The strings are not equal");
      }
}
 
