// Hollow Full Pyramid
#include <stdio.h>

int main()
{
    int i, j, row;
    printf("Enter  The Row:\n");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= 2 * row - 1; j++)
        {
            if (i + j == row + 1 || j - i == row - 1 || i == row)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}