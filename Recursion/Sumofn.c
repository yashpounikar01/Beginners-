/*Write a Program to Find Sum of N Natural Numbers
(entered by users) using Recursion
*/
#include <stdio.h>

int sum(int n);
int main()
{
    int num;
    printf("Enter the Number:\n");
    scanf("%d", &num);

    printf("Sum is:%d", sum(num));
    return 0;
}
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n = n + sum(n - 1);
    }
}