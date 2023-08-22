/*Write a Program to Display Prime Numbers Between Two
Intervals (entered by the user) Using Functions*/
#include <stdio.h>
int primenumber();

int main()
{
    int n1, n2;
    printf("Enter the initial number:\n");
    scanf("%d", &n1);
    printf("Enter the final number:\n");
    scanf("%d", &n2);

    primenumber(n1, n2);
    return 0;
}

int primenumber(int a, int b)
{

    int i, j;
    for (j = a; j <= b; j++)
    {

        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            printf("%d ", j);
        }
    }
}