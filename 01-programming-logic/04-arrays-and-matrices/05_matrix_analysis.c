// Read a 3x3 matrix, display it, calculate the total sum, and find the largest value and its position.

#include <stdio.h>

int main()
{
    int m[3][3], largest, row, column, sum;

    sum = 0;
    row = 0;
    column = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }

        printf("\n");
    }

    largest = m[0][0];

    printf("\nMatrix:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);

            sum += m[i][j];

            if (largest < m[i][j])
            {
                largest = m[i][j];
            }
        }

        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (m[i][j] == largest)
            {
                row = i + 1;
                column = j + 1;
            }
        }
    }

    printf("\nTotal sum: %d", sum);
    printf("\nLargest value: %d", largest);
    printf("\nPosition of the largest value: [%d][%d]\n", row, column);

    return 0;
}