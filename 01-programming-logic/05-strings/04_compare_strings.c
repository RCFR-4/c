// Read two strings, compare them, and display whether they are equal or different.

#include <stdio.h>
#include <string.h>

int main()
{
    char n1[100], n2[100];

    printf("Enter the first text: ");
    fgets(n1, sizeof(n1), stdin);

    if (n1[strlen(n1) - 1] == '\n')
    {
        n1[strlen(n1) - 1] = '\0';
    }

    printf("Enter the second text: ");
    fgets(n2, sizeof(n2), stdin);

    if (n2[strlen(n2) - 1] == '\n')
    {
        n2[strlen(n2) - 1] = '\0';
    }

    printf("\nFirst text: %s", n1);
    printf("\nSecond text: %s", n2);

    if (strcmp(n1, n2) == 0)
    {
        printf("\nThe texts are equal.\n");
    }
    else
    {
        printf("\nThe texts are different.\n");
    }

    return 0;
}