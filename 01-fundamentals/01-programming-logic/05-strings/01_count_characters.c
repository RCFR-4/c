// Read a full name and display it along with the number of characters, ignoring spaces.

#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int total_c;

    total_c = 0;

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    if (name[strlen(name) - 1] == '\n')
    {
        name[strlen(name) - 1] = '\0';
    }

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] != ' ')
        {
            total_c += 1;
        }
    }

    printf("\nEntered name: %s", name);
    printf("\nNumber of characters excluding spaces: %d\n", total_c);

    return 0;
}