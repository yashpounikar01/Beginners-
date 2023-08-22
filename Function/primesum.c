/*Write a Program to check if an integer (entered by the user)
can be expressed as the sum of two prime numbers,if yes then
print all possible combinations with the use of functions*/
#include <stdio.h>

int isPrime(int num);

int main()
{

    int n, f = 0;
    printf("Enter the number:\n");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++)
    {
        if (isPrime(i) == 1)
        {
            if (isPrime(n - i) == 1)
            {
                printf("%d = %d + %d\n", n, i, n - i);
                f = 1;
            }
        }
    }
    if (f == 0)
    {
        printf("Sorry can't be printed");
    }
    return 0;
}

int isPrime(int num)
{
    if (num == 0 || num == 1)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                return 0;
                break;
            }
        }
    }
    return 1;
}
