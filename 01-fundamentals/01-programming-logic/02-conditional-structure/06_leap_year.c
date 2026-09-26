// Ask the user for a year and display whether it is a leap year.

#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    {
        printf("\nThe year is a leap year.\n");
    }
    else
    {
        printf("\nThe year is not a leap year.\n");
    }

    return 0;
}