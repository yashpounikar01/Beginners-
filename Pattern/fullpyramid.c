// Full Pyramid Pattern
#include <stdio.h>

int main()
{

    int i, j, row;
    printf("Enter The Rows:\n");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= 2 * row; j++)
        {
            if (j >= (row + 1) - i && j <= (row - 1) + i)
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