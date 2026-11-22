// Find the Missing Number from 1 to N
#include <stdio.h>

int main() {
    int n, a[100], sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    int expectedSum = n * (n + 1) / 2;
    printf("%d\n", expectedSum - sum);
    return 0;
}