/*Write a Program to Find Largest Number Among Three
Numbers entered by users*/
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter Three Numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    int large=a>b ?a>c?a:c :b>c?b:c; 
    printf("Largest Number:%d",large);
    return 0;
}