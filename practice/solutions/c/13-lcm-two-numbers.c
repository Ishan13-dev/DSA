// Find the LCM of Two Numbers
// Use long long to avoid overflow when taking absolute values or multiplying.
#include <stdio.h>

int main() {
    int inputA, inputB;
    scanf("%d %d", &inputA, &inputB);

    long long x = inputA;
    long long y = inputB;

    if (x < 0)
        x = -x;

    if (y < 0)
        y = -y;

    long long p = x, q = y;

    while (q != 0) {
        long long remainder = p % q;
        p = q;
        q = remainder;
    }

    if (x == 0 || y == 0)
        printf("LCM = 0\n");
    else
        printf("LCM = %lld\n", (x / p) * y);

    return 0;
}