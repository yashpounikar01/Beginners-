/*Write a Program to Calculate Power of a Number
using inbuilt pow() function by taking two inputs from
users as Base and exponent respectively*/
#include<stdio.h>
#include<math.h>
int main(){
    double base,exp;
    printf("Enter The Base and Exponent respectively:\n");
    scanf("%lf %lf",&base,&exp);
    printf("%.2lf^%.2lf = %.2lf",base,exp,pow(base,exp));
    return 0;
}