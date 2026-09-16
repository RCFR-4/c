// Ask the user for an integer and display whether it is even or odd.

#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("\nThe number %d is even\n", number);
    } else {
        printf("\nThe number %d is odd\n", number);
    }

    return 0;
}