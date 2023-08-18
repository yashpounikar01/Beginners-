/*Write a program where the user is asked to enter two
integers (divisor and dividend) and the quotient and the
remainder of their division is computed.(Both divisor and
dividend should be integers.)*/
#include<stdio.h>

int main(){
    int x,y;
    printf("Enter the dividend:\n");
    scanf("%d",&x);
    printf("Enter the Divisor:\n");
    scanf("%d",&y);

    printf("Quotient:%d\n",x/y);
    printf("Remainder:%d",x%y);
    
    return 0;
}