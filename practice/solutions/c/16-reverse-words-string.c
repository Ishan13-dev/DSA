// Reverse Words in a String
// Reverse the word order while keeping each word's letters unchanged.
#include <stdio.h>
#include <string.h>

int main() {
    char s[500], words[100][100];
    int count = 0;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    char *token = strtok(s, " ");

    while (token != NULL && count < 100) {
        strncpy(words[count], token, 99);
        words[count][99] = '\0';
        count++;
        token = strtok(NULL, " ");
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%s", words[i]);

        if (i > 0)
            printf(" ");
    }

    printf("\n");
    return 0;
}