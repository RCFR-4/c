// Keep asking the user for integers until 0 is entered, then display the total sum.

#include <stdio.h>

int main()
{
    int n, sum;

    sum = 0;

    do
    {
        printf("Enter an integer: ");
        scanf("%d", &n);

        sum = sum + n;
    } while (n != 0);

    printf("\nThe sum is: %d\n", sum);

    return 0;
}