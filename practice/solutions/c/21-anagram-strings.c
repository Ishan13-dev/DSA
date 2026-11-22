// Check if Two Strings are Anagrams
#include <stdio.h>
#include <string.h>

int main() {
    char a[200], b[200];
    int count[256] = {0};

    scanf("%199s %199s", a, b);

    if (strlen(a) != strlen(b)) {
        printf("Not anagrams\n");
        return 0;
    }

    for (int i = 0; a[i] != '\0'; i++) {
        count[(unsigned char)a[i]]++;
        count[(unsigned char)b[i]]--;
    }

    int isAnagram = 1;
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}