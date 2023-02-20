#include <stdio.h>
#include <ctype.h>

int count_vowels(char *str)
{
    int count = 0;
    while (*str) {
        if (*str == 'a' || *str == 'e' || *str == 'i' ||
            *str == 'o' || *str == 'u' || *str == 'A' ||
            *str == 'E' || *str == 'I' || *str == 'O' ||
            *str == 'U') {
            count++;
        }
        str++;
    }
    return count;
}

int count_consonants(char *str)
{
    int count = 0;
    while (*str) {
        if (isalpha(*str) && !(*str == 'a' || *str == 'e' ||
                                *str == 'i' || *str == 'o' ||
                                *str == 'u' || *str == 'A' ||
                                *str == 'E' || *str == 'I' ||
                                *str == 'O' || *str == 'U')) {
            count++;
        }
        str++;
    }
    return count;
}

int main()
{
    char str[100];
    int vowels, consonants;

    printf("Enter a string: ");
    scanf("%s", str);

    vowels = count_vowels(str);
    consonants = count_consonants(str);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
