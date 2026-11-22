// Count Digits in a Number
// Zero has one digit. The sign of a negative number is not counted.
#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    if (n == 0)
        count = 1;

    while (n > 0) {
        count++;
        n /= 10;
    }

    printf("Digit count = %d\n", count);
    return 0;
}