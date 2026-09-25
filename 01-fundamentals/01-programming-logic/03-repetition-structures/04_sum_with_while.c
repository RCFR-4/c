// Ask the user for a positive integer and display the sum from 1 up to that number using a while loop.

#include <stdio.h>

int main()
{
    int n, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    sum = 0;

    while (n >= 1)
    {
        sum = sum + n;
        n--;
    }

    printf("\nThe sum is: %d\n", sum);

    return 0;
}