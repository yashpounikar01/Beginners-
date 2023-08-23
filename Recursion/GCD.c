/*Write a Program to Find G.C.D of two numbers entered by
user Using Recursion*/
#include <stdio.h>

int GCD(int a, int b);
int main()
{
    int x, y;
    printf("Enter the two Numbers:\n");
    scanf("%d \n %d", &x, &y);

    printf("G.C.D. is: %d", GCD(x, y));
    return 0;
}
int GCD(int a, int b)
{
    if (a == b || a % b == 0)
    {
        return b;
    }
    else if (b % a == 0)
    {
        return a;
    }
    else if (a > b)
    {

        return GCD(a % b, b);
    }
    else
    {
        return GCD(a, b % a);
    }
}