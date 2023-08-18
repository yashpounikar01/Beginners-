/*5) Write a Program to Display Fibonacci Series upto
certain number n (n is entered by user)
*/
#include<stdio.h>

int main(){

    int a=0,b=1,c,n;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    printf("Fibonacci Series : %d %d ",a,b);
    c=a+b;
    while(c<=n){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}