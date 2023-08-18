/*Write a Program to Find Factorial of a given number N
(N is entered by user)*/
#include<stdio.h>

int main(){

    int n,i,fact=1;
    printf("enter the number:\n")   ;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("Factorial is:%d",fact);
    return 0;
}