// Read five integers into an array and display the largest and smallest values.

#include <stdio.h>

int main()
{
    int v[5], smallest, largest;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d value of the array: ", i + 1);
        scanf("%d", &v[i]);
    }

    smallest = v[0];
    largest = v[0];

    for (int i = 0; i < 5; i++)
    {
        if (smallest >= v[i])
        {
            smallest = v[i];
        }

        if (largest <= v[i])
        {
            largest = v[i];
        }
    }

    printf("\nLargest value: %d\n", largest);
    printf("\nSmallest value: %d\n", smallest);

    return 0;
}