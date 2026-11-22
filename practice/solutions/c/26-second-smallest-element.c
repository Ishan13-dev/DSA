// Find Second Smallest Distinct Element
#include <stdio.h>

int main() {
    int n, a[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int smallest = a[0], second = 0, found = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            second = smallest;
            smallest = a[i];
            found = 1;
        } else if (a[i] > smallest && (!found || a[i] < second)) {
            second = a[i];
            found = 1;
        }
    }

    if (found)
        printf("%d\n", second);
    else
        printf("No second smallest distinct value\n");

    return 0;
}