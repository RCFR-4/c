// Ask the user for a positive integer and display the sum from 1 up to that number.

#include <stdio.h>

int main()
{
    int n, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("\nThe sum of the numbers up to the entered number is: %d\n", sum);
    return 0;
}