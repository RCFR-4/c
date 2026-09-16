// Ask the user for a number and display whether it is positive, negative, or zero.

#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("\nThe number is zero\n");
    } else if (number > 0) {
        printf("\nThe number %d is positive\n", number);
    } else {
        printf("\nThe number %d is negative\n", number);
    }

    return 0;
}