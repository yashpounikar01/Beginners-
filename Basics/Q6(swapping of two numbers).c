// Write a Program to Swap Two Numbers
#include<stdio.h>

int main(){

    int a,b,c;
    printf("Enter first Number:\n");
    scanf("%d",&a);
    printf("Enter Second Number:\n");
    scanf("%d",&b);
    printf("Before Swapping:\n");
    printf("a=%d  b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter Swapping:\n");
    printf("a=%d  b=%d",a,b);
    return 0;
}