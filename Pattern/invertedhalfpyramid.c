// Inverted half Pyramid Pattern
#include <stdio.h>

int main()
{
    int row, col, i, j;
    printf("Enter the Row:\n");
    scanf("%d", &row);
    printf("Enter the Column:\n");
    scanf("%d", &col);
    for (i = row; i >= 1; i--)
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