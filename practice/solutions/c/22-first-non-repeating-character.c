// Find First Non-Repeating Character
#include <stdio.h>

int main() {
    char s[200];
    int count[256] = {0};

    scanf("%199s", s);

    for (int i = 0; s[i] != '\0'; i++)
        count[(unsigned char)s[i]]++;

    for (int i = 0; s[i] != '\0'; i++) {
        if (count[(unsigned char)s[i]] == 1) {
            printf("%c\n", s[i]);
            return 0;
        }
    }

    printf("No non-repeating character\n");
    return 0;
}