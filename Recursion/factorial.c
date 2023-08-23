/*Write a Program to Calculate Factorial of a Number Using
Recursion
*/
#include<stdio.h>

int fact(int n);

int main(){
    int num;
    printf("Enter The Number:\n");
    scanf("%d",&num);
    printf("Fctorial of %d is: %d",num,fact(num));
    return 0;
}

int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n=n*fact(n-1);
    }
}