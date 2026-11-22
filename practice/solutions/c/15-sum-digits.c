// Find the Sum of Digits
// Extract each digit using % 10 and add it to the total.
#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);

    long long n = input;
    int sum = 0;

    if (n < 0)
        n = -n;

    while (n > 0) {
        sum += (int)(n % 10);
        n /= 10;
    }

    printf("Digit sum = %d\n", sum);
    return 0;
}