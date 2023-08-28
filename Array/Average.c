/*Write a Program that takes N elements (max. value of N is 100
and N is the float number specified by user) from user, stores data
in an array and Calculates the average of those numbers.
*/
#include<stdio.h>

int main(){

    double arr[100]={},sum;
    int n;
    printf("Enter the No. of elements:\n");
    scanf("%d",&n);
    printf("Enter the %d elements:\n",n);
    for(int i=1;i<=n;i++){
        scanf("%lf",&arr[i]);
        sum += arr[i];
    }
    float avg=sum/n;
    printf("Average is:%.2lf",avg);
    

    return 0;
}