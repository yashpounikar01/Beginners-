// Half Pyramid star Pattern
#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter The Rows:\n");
    scanf("%d", &row);
    printf("Enter the Columns:\n");
    scanf("%d", &col);

    int i, j;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (j <= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}