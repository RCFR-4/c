// Ask the user for the number of rows and columns and display a rectangle using asterisks.

#include <stdio.h>

int main()
{
    int row, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &row);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    if ((row <= 0) || (columns <= 0))
    {
        printf("\nEnter a valid quantity.\n");
        return 0;
    }

    printf("\n");

    for (int i = 1; i <= row; i++)
    {
        for (int y = 1; y <= columns; y++)
        {
            printf("* ");
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}