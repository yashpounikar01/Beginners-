// Write a Program to Check Whether Number is Even orOdd

#include<stdio.h>

int main(){

    int n;
    printf("Enter The Number:\n");
    scanf("%d",&n);
    if(n%2==0){
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}