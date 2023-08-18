/*Write a Program which accepts coefficients of a
quadratic equation from the user and displays the roots
(both real and complex roots depending upon the
discriminant).*/
#include<stdio.h>
#include<math.h>

int main(){

    double a,b,c,root1,root2,dis;
    printf("Enter Coefficient of x^2, x and constant term respectively:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    dis=b*b - 4*a*c;
    if(dis>0){
        root1=(-b + sqrt(dis))/(2*a);
        root2=(-b- sqrt(dis))/(2*a);
        printf("Roots are %.2lf and %.2lf",root1,root2);
    }else if(dis==0){
        root1=root2=-b/(2*a);
        printf("Two Equal roots are %.2lf and %.2lf",root1,root2);
    }else if(dis<0){
        double real=-b/(2*a);
        double imag=sqrt(-dis)/(2*a);
        printf("Roots are %.2lf+%.2lfi and %.2lf+%.2lfi",real,imag,real,imag);
    }
    
    return 0;
}