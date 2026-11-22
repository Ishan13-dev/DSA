// Find the GCD of Two Numbers
// Euclid's algorithm repeatedly replaces (a, b) with (b, a % b).
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a < 0)
        a = -a;

    if (b < 0)
        b = -b;

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("GCD = %d\n", a);
    return 0;
}