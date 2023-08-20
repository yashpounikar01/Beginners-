// Inverted Full Pyramid
#include <stdio.h>

int main()
{
    int i, j, row;
    printf("Enter The rows:\n");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= 2 * row; j++)
        {
            if (j >= i && j <= (2 * row - i))
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