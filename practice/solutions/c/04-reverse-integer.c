// Reverse an Integer
// Store the reversed value in long long to avoid 32-bit integer overflow.
#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);

    long long n = input;
    long long reversed = 0;

    while (n != 0) {
        int digit = (int)(n % 10);
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    printf("%lld\n", reversed);
    return 0;
}