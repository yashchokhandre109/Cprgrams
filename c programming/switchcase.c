#include<stdio.h>
void main()
{
    int Day_number;
    printf("enter 1,2,3,4,5,6 OR 7");
    scanf("%d",&Day_number);
    switch (Day_number)
    {
    case 1:
    printf("sunday");
        break;
    
    case 2:
    printf("monday");
    break;

    case 3:
    printf("tuesday");
    break;

    case 4:
    printf("wednesday");
    break;

    case 5:
    printf("thursday");
    break;

    case 6:
    printf("friday");
    break;

    case 7:
    printf("saturday");
    break;
    
    default:
    printf("invalid choice");
        break;
    }
}