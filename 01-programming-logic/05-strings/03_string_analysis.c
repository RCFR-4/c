// Read a text, analyze its characters, and display the number of letters, digits, and spaces.

#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    int letters, digits, spaces;

    letters = 0;
    digits = 0;
    spaces = 0;

    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    if (text[strlen(text) - 1] == '\n')
    {
        text[strlen(text) - 1] = '\0';
    }

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            spaces += 1;
        }

        if ((text[i] >= 'a' && text[i] <= 'z') ||
            (text[i] >= 'A' && text[i] <= 'Z'))
        {
            letters += 1;
        }

        if (text[i] >= '0' && text[i] <= '9')
        {
            digits += 1;
        }
    }

    printf("\nEntered text: %s", text);
    printf("\nLetters: %d", letters);
    printf("\nDigits: %d", digits);
    printf("\nSpaces: %d\n", spaces);

    return 0;
}