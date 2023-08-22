/*Write a Program to Convert Binary Number to Decimal
manually by creating user-defined functions.*/
#include <stdio.h>
int decimal(int deci);

int main()
{
    int n;
    printf("Enter the Binary Number:\n");
    scanf("%d", &n);
    decimal(n);
    return 0;
}

int decimal(int deci)
{
    int remainder, dec = 0, base = 1;
    for (int i = 1; i > 0; i++)
    {
        remainder = deci % 10;
        dec = dec + remainder * base;
        deci /= 10;
        base = base * 2;
    }
    printf("decimal:%d", dec);
}