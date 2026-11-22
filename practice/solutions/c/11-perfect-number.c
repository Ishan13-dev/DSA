// Check if a Number is Perfect
// A perfect number equals the sum of its positive divisors excluding itself.
#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    if (n > 1) {
        for (int divisor = 1; divisor <= n / 2; divisor++) {
            if (n % divisor == 0)
                sum += divisor;
        }
    }

    if (n > 1 && sum == n)
        printf("Perfect number\n");
    else
        printf("Not a perfect number\n");

    return 0;
}