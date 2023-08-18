/*Write a Program to Generate Multiplication Table of a
number (entered by the user) using a for loop.*/
#include<stdio.h>

int main(){

    int n,i;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}