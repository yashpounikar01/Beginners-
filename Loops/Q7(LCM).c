/*Write a Program to find LCM of two Number  entered be users*/
#include<stdio.h>

int main(){

    int a,b,i,lcm;
    printf("Enter Two Numbers:\n");
    scanf("%d %d",&a,&b);
    lcm=a>b?a:b;
    while(1){
        if (lcm%a==0 && lcm%b==0){
            printf("LCM:%d",lcm);
            break;
        }
        ++lcm;
    }
    
    return 0;
}