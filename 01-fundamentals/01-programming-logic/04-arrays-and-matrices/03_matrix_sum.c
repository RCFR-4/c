// Read the values of a matrix and display the total sum of its elements.

#include <stdio.h>

int main()
{
    int m[2][3], sum;

    sum = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the value [%d] [%d]: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);

            sum = sum + m[i][j];
        }

        printf("\n");
    }

    printf("Total sum: %d\n", sum);

    return 0;
}