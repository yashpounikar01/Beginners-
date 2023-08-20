// Half Pyramid using Number
#include <stdio.h>

int main()
{
    int i, j, row;
    printf("Enter the Row:\n");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}