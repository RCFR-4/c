// Read five integers into an array, search for a number, and display how many times it appears.

#include <stdio.h>

int main()
{
    int v[5], n, count;

    count = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d value of the array: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nEnter the number you want to search for: ");
    scanf("%d", &n);

    for (int i = 0; i < 5; i++)
    {
        if (n == v[i])
        {
            count += 1;
        }
    }

    if (count == 0)
    {
        printf("\nThis number is not in the array.\n");
    }
    else
    {
        printf("\nThis number appeared %d time(s).\n", count);
    }

    return 0;
}