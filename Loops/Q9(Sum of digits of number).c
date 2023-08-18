/*Write a Program to display sum of all digits of a given
Number N by user
*/
#include<stdio.h>

int main(){
    int n,remainder,sum=0;
    printf("Enter The Number:\n");
    scanf("%d",&n);
    while(n!=0){
        remainder=n%10;
        sum=sum+remainder;
        n/=10;
    }
    printf("Sum of Digits:%d",sum);
    return 0;
}