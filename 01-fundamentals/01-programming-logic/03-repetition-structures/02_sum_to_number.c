// Ask the user for a positive integer and display the sum from 1 up to that number.

#include <stdio.h>

int main()
{
    int n, soma;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    soma = 0;

    for (int i = 1; i <= n; i++)
    {
        soma = soma + i;
    }

    printf("\nThe sum of the numbers up to the entered number is: %d\n", soma);
    return 0;
}