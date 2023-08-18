/*Write a Program to Check Whether a Number N
entered by user is Palindrome or Not
*/
#include<stdio.h>

int main(){
    int n,reverse=0,remainder;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    int c=n;
    while(n!=0){
        remainder=n%10;
        reverse=(reverse*10)+remainder;
        n/=10;
    }
    if(c==reverse){
        printf("Palindrome");
    }
    else{
        printf("Not");
    }
    return 0;
}