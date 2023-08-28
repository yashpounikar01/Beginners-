/*Write a Program that takes n element from user and displays
the largest element of an array*/
#include<stdio.h>

int main(){
    
    double arr[]={};
    int n;
    printf("Enter the No. of elements:\n");
    scanf("%d",&n);
    printf("Enter the %d Elements:\n",n);
    for(int i=1;i<=n;i++){
        scanf("%lf",&arr[i]);

    }
    for(int i=1;i<=n;i++){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("Largest Element is: %.2lf",arr[0]);
    return 0;
}