// Read eight integers and use two functions to calculate their sum and count the even numbers.

#include <stdio.h>

int calculateSum(int v[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += v[i];
    }

    return sum;
}

int countEven(int v[], int size)
{
    int even_count = 0;

    for (int i = 0; i < size; i++)
    {
        if (v[i] % 2 == 0)
        {
            even_count += 1;
        }
    }

    return even_count;
}

int main()
{
    int v[8];

    for (int i = 0; i < 8; i++)
    {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nTotal sum: %d", calculateSum(v, 8));
    printf("\nNumber of even elements: %d\n", countEven(v, 8));

    return 0;
}