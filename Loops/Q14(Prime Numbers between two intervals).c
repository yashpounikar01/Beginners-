/*Write a Program to Display Prime Numbers Between
Two Intervals (entered by user)
*/
#include<stdio.h>

int main(){
    int n1,n2,i,j;
    printf("Enter The Initial Number:\n");
    scanf("%d",&n1);
    printf("Enter The Final Number\n");
    scanf("%d",&n2);
    for(j=n1;j<=n2;j++){
        for(i=2;i<j;i++){

            if(j%i==0)
                break;
        }
            if(i==j)
                printf("%d ",j);
    }
            
     return 0;
}