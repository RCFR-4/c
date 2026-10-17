// Read five student grades, calculate the class average using a function, and count how many students scored at or above the average.

#include <stdio.h>

float calculateAverage(float grades[], int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += grades[i];
    }

    return sum / size;
}

int countAboveAverage(float grades[], int size, float average)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (grades[i] >= average)
        {
            count += 1;
        }
    }

    return count;
}

int main()
{
    float grades[5], average;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter grade %d: ", i + 1);
        scanf("%f", &grades[i]);
    }

    average = calculateAverage(grades, 5);

    printf("\nClass average: %.2f", average);
    printf("\nStudents at or above average: %d\n", countAboveAverage(grades, 5, average));

    return 0;
}