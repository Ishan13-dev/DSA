// Find the Nth Fibonacci Number (0-based)
// F92 fits in a signed long long; larger indexes are rejected.
#include <stdio.h>

int main() {
    int n;
    long long a = 0, b = 1;
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input\n");
        return 0;
    }

    if (n > 92) {
        printf("Input too large (maximum index is 92)\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        long long next = a + b;
        a = b;
        b = next;
    }

    printf("%lld\n", a);
    return 0;
}