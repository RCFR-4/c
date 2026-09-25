// Ask the user for a positive integer and display the numbers from 1 up to that number.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("\nNumbers from 1 up to the entered number: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}