// Print Prime Numbers in a Range
#include <stdio.h>

int main() {
    int start, end;
    scanf("%d %d", &start, &end);

    for (int n = start; n <= end; n++) {
        int isPrime = (n >= 2);

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", n);
    }

    printf("\n");
    return 0;
}