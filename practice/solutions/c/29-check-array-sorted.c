// Check if an Array is Sorted in Non-Decreasing Order
#include <stdio.h>

int main() {
    int n, a[100], isSorted = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            isSorted = 0;
            break;
        }
    }

    if (isSorted)
        printf("Sorted\n");
    else
        printf("Not sorted\n");

    return 0;
}