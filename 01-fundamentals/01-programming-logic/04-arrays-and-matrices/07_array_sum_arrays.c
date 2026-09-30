// Read two arrays and create a third array with the sum of their corresponding elements.

#include <stdio.h>

int main()
{
    int v[5], v2[5], sum_v[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d value of the first array: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d value of the second array: ", i + 1);
        scanf("%d", &v2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum_v[i] = v[i] + v2[i];
    }

    printf("\nValues of the third array:");

    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", sum_v[i]);
    }

    printf("\n");

    return 0;
}