/* Write a Program to Reverse a given Number N by user*/
#include<stdio.h>

int main(){
    int n,remainder,reverse=0;
    printf("Enter The Number:\n");
    scanf("%d",&n);
    while(n!=0){
        remainder=n%10;
        reverse=(reverse*10)+remainder;
        n/=10;
    }
    printf("Reverse of Number:%d",reverse);
    return 0;
}