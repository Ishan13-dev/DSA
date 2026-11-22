// Find a Pair with the Given Sum
#include <stdio.h>

int main() {
    int n, a[100], target;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &target);

    int found = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long pairSum = (long long)a[i] + a[j];

            if (pairSum == target) {
                printf("%d %d\n", a[i], a[j]);
                found = 1;
                break;
            }
        }

        if (found)
            break;
    }

    if (!found)
        printf("No pair found\n");

    return 0;
}