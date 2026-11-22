// Count Vowels and Consonants
// Only alphabetic characters are counted. Spaces, digits, and punctuation are ignored.
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[500];
    int vowels = 0, consonants = 0;

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = tolower((unsigned char)s[i]);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    return 0;
}