// Ask the user for a positive integer and display a countdown from that number to 1.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n >= 1)
    {
        printf("%d ", n);
        n--;
    }

    return 0;
}