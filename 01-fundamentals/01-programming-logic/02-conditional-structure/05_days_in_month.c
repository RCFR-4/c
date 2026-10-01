// Ask the user for a month and year and display the number of days in that month.

#include <stdio.h>

int main()
{
    int month, year;

    printf("Enter the month: ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    switch (month)
    {
        case 1:
            printf("\nThe month has 31 days.\n");
            break;

        case 2:
            if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
            {
                printf("\nThe month has 29 days.\n");
            }
            else
            {
                printf("\nThe month has 28 days.\n");
            }
            break;

        case 3:
            printf("\nThe month has 31 days.\n");
            break;

        case 4:
            printf("\nThe month has 30 days.\n");
            break;

        case 5:
            printf("\nThe month has 31 days.\n");
            break;

        case 6:
            printf("\nThe month has 30 days.\n");
            break;

        case 7:
            printf("\nThe month has 31 days.\n");
            break;

        case 8:
            printf("\nThe month has 31 days.\n");
            break;

        case 9:
            printf("\nThe month has 30 days.\n");
            break;

        case 10:
            printf("\nThe month has 31 days.\n");
            break;

        case 11:
            printf("\nThe month has 30 days.\n");
            break;

        case 12:
            printf("\nThe month has 31 days.\n");
            break;

        default:
            printf("\nInvalid month.\n");
            break;
    }

    return 0;
}