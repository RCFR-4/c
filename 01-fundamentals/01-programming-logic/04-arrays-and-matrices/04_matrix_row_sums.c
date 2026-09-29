// Read the values of a matrix and display the sum of each row.

#include <stdio.h>

int main()
{
    int m[3][3], row1_sum, row2_sum, row3_sum;

    row1_sum = 0;
    row2_sum = 0;
    row3_sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value [%d] [%d]: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);

            if (i + 1 == 1)
            {
                row1_sum = row1_sum + m[i][j];
            }

            if (i + 1 == 2)
            {
                row2_sum = row2_sum + m[i][j];
            }

            if (i + 1 == 3)
            {
                row3_sum = row3_sum + m[i][j];
            }
        }

        printf("\n");
    }

    printf("Total sum of row 1: %d\n", row1_sum);
    printf("Total sum of row 2: %d\n", row2_sum);
    printf("Total sum of row 3: %d\n", row3_sum);

    return 0;
}