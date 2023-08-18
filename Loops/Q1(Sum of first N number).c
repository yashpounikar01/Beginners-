/*Write a Program to Calculate Sum of first N Natural
Numbers (here value of N is Entered by user)
*/
#include<stdio.h>

int main(){

    int n,sum=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
         sum+=i;
    }
    printf("Sum is:%d\n",sum);
    return 0;
}