// Factorial of a Number
// 20! is the largest factorial that fits in a signed long long.
#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers\n");
        return 0;
    }

    if (n > 20) {
        printf("Input too large (maximum is 20)\n");
        return 0;
    }

    for (int i = 1; i <= n; i++)
        factorial *= i;

    printf("%lld\n", factorial);
    return 0;
}