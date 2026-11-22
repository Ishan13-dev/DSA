// Count Character Frequency
// Count characters including spaces and punctuation. Display only characters that appear.
#include <stdio.h>

int main() {
    char s[500];
    int frequency[256] = {0};

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        frequency[(unsigned char)s[i]]++;

    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            if (i >= 32 && i <= 126)
                printf("'%c' : %d\n", i, frequency[i]);
            else
                printf("ASCII %d : %d\n", i, frequency[i]);
        }
    }

    return 0;
}