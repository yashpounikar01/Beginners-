/*Write a Program to check whether a number entered
by the user is an Armstrong number or not.*/
#include<stdio.h>

int main(){
    int n,arm=0;;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    int c=n;
    while(n!=0){
        int r=n%10;
        arm=(r*r*r)+arm;
        n/=10;
    }
    if(c==arm){
        printf("Armstrong Number");
    }
    else{
        printf("Not");
    }
    return 0;
}