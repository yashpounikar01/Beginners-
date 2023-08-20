/*Write a Program to Make a Simple Calculator to Add, Subtract,
Multiply or Divide Using Switch case
The program should takes an arithmetic operator (+, -,*, /) and
two operands from a user and performs the operation on those
two operands depending upon the operator entered by the user.
*/
#include<stdio.h>

int main(){
    int x,y;
    char ch;
    printf("Enter the Operator:\n");
    scanf("%c",&ch);
    printf("Enter The First number:\n");
    scanf("%d",&x);
    printf("Enter the Second second:\n");
    scanf("%d",&y);

    switch(ch){
        case '+':
        printf("Sum is :%d",x+y);
        break;

        case'-':
        printf("Subtraction is :%d",x-y);
        break;

        case'*':
        printf("Product is :%d",x*y);
        break;

        case'/':
        printf("Division is :is %d",x/y);
        break;

        default:
        printf("Sorry");
        break;
    }
    return 0;
}