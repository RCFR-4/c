// Display a menu repeatedly until the user chooses the exit option.

#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Choose an option: Say hello (1), Show a message (2), Exit (0): ");
        scanf("%d", &n);

        if (n == 1)
        {
            printf("\nHello!\n");
        }

        if (n == 2)
        {
            printf("\nWelcome to the program!\n");
        }
    } while (n != 0);

    printf("\nProgram closed.\n");

    return 0;
}