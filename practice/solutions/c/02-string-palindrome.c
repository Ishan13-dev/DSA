// Check if a String is a Palindrome
#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    scanf("%199s", s);

    int l = 0, r = (int)strlen(s) - 1;
    int isPalindrome = 1;

    while (l < r) {
        if (s[l] != s[r]) {
            isPalindrome = 0;
            break;
        }
        l++;
        r--;
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}