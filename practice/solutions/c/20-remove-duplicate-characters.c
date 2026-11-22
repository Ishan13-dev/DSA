// Remove Duplicate Characters
// Keep the first occurrence of each character, preserving the original order and spaces.
#include <stdio.h>

int main() {
    char s[500], output[500];
    int seen[256] = {0};
    int j = 0;

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        unsigned char ch = (unsigned char)s[i];

        if (!seen[ch]) {
            seen[ch] = 1;
            output[j++] = s[i];
        }
    }

    output[j] = '\0';

    printf("Without duplicates: %s\n", output);
    return 0;
}