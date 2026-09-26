// Ask the user for an integer and display its multiplication table from 1 to 10.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d x %d: %d\n", n, i, n * i);
    }

    return 0;
}