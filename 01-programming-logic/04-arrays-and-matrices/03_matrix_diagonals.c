// Read a 3x3 matrix and display the values of its main and secondary diagonals.

#include <stdio.h>

int main()
{
    int m[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value [%d][%d] of the matrix: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }

        printf("\n");
    }

    printf("\nMain diagonal:");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf("\n%d", m[i][j]);
            }
        }
    }

    printf("\n\nSecondary diagonal:");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i + j == 2)
            {
                printf("\n%d", m[i][j]);
            }
        }
    }

    printf("\n");

    return 0;
}