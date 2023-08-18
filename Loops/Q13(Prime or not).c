/*Write a Program to Check Whether a Number is Prime
or Not*/
#include<stdio.h>

int main(){
    int n,i;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0)
        break;
    }
    if(i==n){
            printf("Prime Number");
        }
        else{
        printf("Not a Prime Number");
        }
    return 0;
}