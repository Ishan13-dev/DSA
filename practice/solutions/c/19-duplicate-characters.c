// Find Duplicate Characters
// Print each repeated character once with its count. Spaces are ignored.
#include <stdio.h>

int main() {
    char s[500];
    int frequency[256] = {0};
    int shown[256] = {0};
    int found = 0;

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] != ' ')
            frequency[(unsigned char)s[i]]++;
    }

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        unsigned char ch = (unsigned char)s[i];

        if (ch != ' ' && frequency[ch] > 1 && !shown[ch]) {
            printf("%c appears %d times\n", ch, frequency[ch]);
            shown[ch] = 1;
            found = 1;
        }
    }

    if (!found)
        printf("No duplicate characters\n");

    return 0;
}