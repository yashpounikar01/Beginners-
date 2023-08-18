/*Write a Program to Calculate Power of a Number
without using inbuilt pow() function by taking two
inputs from users as Base and exponent respectively
*/
#include<stdio.h>

int main(){
    double base,exp,result=1;
    printf("Enter The Base and Exponent respectively:\n");
    scanf("%lf %lf",&base,&exp);
    while(exp!=0){
        result*=base;
        --exp;
    }
    printf("%.2lf^%.2f = %.2lf",base,exp,result);
    return 0;
}