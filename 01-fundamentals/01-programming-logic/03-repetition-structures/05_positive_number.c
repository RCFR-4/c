// Ask the user for a positive integer and keep asking until a valid number is entered.

#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("\nAccepted number: %d\n", n);

    return 0;
}