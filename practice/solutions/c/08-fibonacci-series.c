// Fibonacci Series
// This program prints up to 93 terms (F0 through F92) safely.
#include <stdio.h>

int main() {
    int n;
    long long a = 0, b = 1;
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input\n");
        return 0;
    }

    if (n > 93) {
        printf("Input too large (maximum is 93 terms)\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("%lld ", a);

        long long next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}