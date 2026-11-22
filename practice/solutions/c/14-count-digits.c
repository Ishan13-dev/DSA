// Count Digits in a Number
// Zero has one digit. The sign is not counted; long long handles INT_MIN.
#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);

    long long n = input;
    int count = 0;

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