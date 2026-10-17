// Read a text and display the total number of vowels it contains.

#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    int count;

    count = 0;

    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    if (text[strlen(text) - 1] == '\n')
    {
        text[strlen(text) - 1] = '\0';
    }

    for (int i = 0; text[i] != '\0'; i++)
    {
        if ((text[i] == 'a' || text[i] == 'A') ||
            (text[i] == 'e' || text[i] == 'E') ||
            (text[i] == 'i' || text[i] == 'I') ||
            (text[i] == 'o' || text[i] == 'O') ||
            (text[i] == 'u' || text[i] == 'U'))
        {
            count += 1;
        }
    }

    printf("\nTotal vowels: %d\n", count);

    return 0;
}