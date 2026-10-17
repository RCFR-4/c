// Read five integers into an array and display its sum, average, largest and smallest values, and how many values are above the average.

#include <stdio.h>

int main()
{
    int v[5], sum, largest, smallest, above_average_count;
    float average;

    sum = 0;
    average = 0;
    above_average_count = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d value of the array: ", i + 1);
        scanf("%d", &v[i]);
    }

    largest = v[0];
    smallest = v[0];

    for (int i = 0; i < 5; i++)
    {
        sum += v[i];

        if (largest <= v[i])
        {
            largest = v[i];
        }

        if (smallest >= v[i])
        {
            smallest = v[i];
        }
    }

    average = sum / 5.0;

    for (int i = 0; i < 5; i++)
    {
        if (v[i] > average)
        {
            above_average_count += 1;
        }
    }

    printf("\nSum: %d", sum);
    printf("\nAverage: %.2f", average);
    printf("\nLargest value: %d", largest);
    printf("\nSmallest value: %d", smallest);
    printf("\nValues above the average: %d\n", above_average_count);

    return 0;
}