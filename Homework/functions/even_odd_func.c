#include<stdio.h>
void even(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);

    if(num%2==0){
        printf("The number is even ");
    }
    else {
        printf("The number is odd");
    }

}
void main(){
    even();
}