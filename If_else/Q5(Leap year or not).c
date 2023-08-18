/*Write a Program to Check whether a year entered by
user is Leap Year or not*/
#include<stdio.h>

int main(){

    int year;
    printf("Enter the Year:\n");
    scanf("%d",&year);
    if(year%400==0){
        printf("Leap");
    }else if(year%100==0){
        printf("not leap");
    }
    else if(year%4==0){
        printf("Leap");
    }else{
        printf("Not leap");
    }
     return 0;
}