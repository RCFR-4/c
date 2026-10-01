// Ask the user for an integer and display whether it is a prime number.

#include <stdio.h>

int main()
{
    int n;
    int isPrime = 1;

    printf("Enter an integer greater than 1: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        printf("\nThe number is not prime.\n");
    }
    else
    {
        printf("\nThe number is prime.\n");
    }

    return 0;
}