// Read a word and use two functions to count its vowels and consonants, then display both results.

#include <stdio.h>
#include <string.h>

int vowels(char word[])
{

    int quant_vowels = 0;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if ((word[i] == 'a' || word[i] == 'A') || (word[i] == 'e' || word[i] == 'E')
            || (word[i] == 'i' || word[i] == 'I') || (word[i] == 'o' || word[i] == 'O')
            || (word[i] == 'u' || word[i] == 'U'))
        {
            quant_vowels += 1;

        }
    }

    return quant_vowels;
}

int consonants(char word[])
{
    int quant_consonants = 0;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if ((word[i] == 'a' || word[i] == 'A') || (word[i] == 'e' || word[i] == 'E')
            || (word[i] == 'i' || word[i] == 'I') || (word[i] == 'o' || word[i] == 'O')
            || (word[i] == 'u' || word[i] == 'U'))
        {

        } else
        {
            quant_consonants += 1;
        }
    }

    return quant_consonants;
}

int main()
{

    int total_con, total_vo;
    char word[100];

    total_con = 0;
    total_vo = 0;

    printf("Enter a word: ");
    fgets(word, sizeof(word), stdin);

    if (word[strlen(word) - 1] == '\n')
    {
        word[strlen(word) - 1] = '\0';
    }

    total_con = consonants(word);
    total_vo = vowels(word);

    printf("\nNumber of vowels: %d", total_vo);
    printf("\nNumber of consonants: %d\n", total_con);

    return 0;
}
