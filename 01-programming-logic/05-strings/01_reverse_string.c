// Read a text and display it in reverse order.

#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    int length;

    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    if (text[strlen(text) - 1] == '\n')
    {
        text[strlen(text) - 1] = '\0';
    }

    length = strlen(text);

    printf("\nReversed text: ");

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", text[i]);
    }

    printf("\n");

    return 0;
}