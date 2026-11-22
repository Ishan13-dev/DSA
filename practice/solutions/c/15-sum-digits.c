// Find the Sum of Digits
// Extract each digit using % 10 and add it to the total.
#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("Digit sum = %d\n", sum);
    return 0;
}