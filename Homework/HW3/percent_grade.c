#include <stdio.h>
void main()
{
    int phy, chem, bio, math, comp;
    float percentage;
    printf("enter the marks of physics");
    scanf("%d",&phy);
    printf("enter the marks of chemistry");
    scanf("%d",&chem);
    printf("enter the marks of biology");
    scanf("%d",&bio);
    printf("enter the marks of mathematics");
    scanf("%d",&math);
    printf("enter the marks of computer");
    scanf("%d",&comp);
    percentage= ((phy+chem+bio+math+comp)/500.0)*100;
    printf("%f ",percentage);
    if (percentage>=90)
    {
        printf("congratulation, your grade is A");
        }
    else if (percentage>=80)
    {
        printf("congratulation, your grade is B");
        }
    else if (percentage>=80)
    {
        printf("congratulation, your grade is C");
        }
    else if (percentage>=70)
    {
        printf("congratulation, your grade is D");
        }
    else if (percentage>=60)
    {
        printf("congratulation, your grade is E");
        }
    else if (percentage<=40)
    
    {
        printf("your grade is F");}
}