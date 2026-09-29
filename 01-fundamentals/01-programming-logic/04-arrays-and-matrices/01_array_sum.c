// Read five integers into an array and display the total sum.

#include <stdio.h>

int main()
{
    int v[5], sum;

    sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value at position [%d]: ", i + 1);
        scanf("%d", &v[i]);

        sum = sum + v[i];
    }

    printf("\nTotal sum of the array: %d\n", sum);

    return 0;
}