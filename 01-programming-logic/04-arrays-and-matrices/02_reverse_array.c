// Read five integers into an array and store them in reverse order in another array.

#include <stdio.h>

int main()
{
    int v[5], reverse_v[5], position;

    position = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d value of the array: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nReverse order:");

    for (int i = 4; i >= 0; i--)
    {
        reverse_v[i] = v[position];
        position += 1;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", reverse_v[i]);
    }

    printf("\n");

    return 0;
}