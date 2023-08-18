/*6) Write a Program to Find GCD or HCF of two numbers
entered by user
*/
#include<stdio.h>

int main(){

    int a,b,i,gcd;
    printf("Enter The two Numbers:\n");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    printf("GCD: %d",gcd);
    
    return 0;
}