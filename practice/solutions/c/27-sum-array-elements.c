// Sum of Array Elements
// Use long long to reduce overflow risk for sums of integer values.
#include <stdio.h>

int main() {
    int n, a[100];
    long long sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("%lld\n", sum);
    return 0;
}