/*Write a Program to Display Fibonacci Series upto nth
term (n is entered by user)*/
#include<stdio.h>

int main(){

    int a=0,b=1,c,n,i;
    printf("Enter The no. of elemets:\n");
    scanf("%d",&n);
    printf("Fibonacci Series:%d %d ",a,b);
    for(i=3;i<=n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}