/*Write a Program that calculates the power of a number
using recursion where base and exponent is entered by the
user.*/
#include <stdio.h>

int power(int a, int b);
int main()
{
    int base, expo;
    printf("Enter the Base:\n");
    scanf("%d", &base);
    printf("Enter the Exponent:\n");
    scanf("%d", &expo);

    printf("Power is:%d", power(base, expo));
    return 0;
}
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * power(a, b - 1);
    }
}