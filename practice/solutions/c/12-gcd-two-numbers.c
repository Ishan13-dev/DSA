// Find the GCD of Two Numbers
// Use long long so INT_MIN can be converted to a positive value safely.
#include <stdio.h>

int main() {
    int inputA, inputB;
    scanf("%d %d", &inputA, &inputB);

    long long a = inputA;
    long long b = inputB;

    if (a < 0)
        a = -a;

    if (b < 0)
        b = -b;

    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("GCD = %lld\n", a);
    return 0;
}