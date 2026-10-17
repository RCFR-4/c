// Read five integers, find the largest value using a function, and display the result.

#include <stdio.h>

int findMaximum(int numbers[], int size)
{
    int maximum = numbers[0];

    for (int i = 0; i < size; i++)
    {
        if (maximum <= numbers[i])
        {
            maximum = numbers[i];
        }
    }

    return maximum;
}

int main()
{
    int numbers[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value at position %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nLargest value entered: %d\n", findMaximum(numbers, 5));

    return 0;
}