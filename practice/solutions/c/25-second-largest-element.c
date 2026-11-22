// Find Second Largest Distinct Element
#include <stdio.h>

int main() {
    int n, a[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int largest = a[0], second = 0, found = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
            found = 1;
        } else if (a[i] < largest && (!found || a[i] > second)) {
            second = a[i];
            found = 1;
        }
    }

    if (found)
        printf("%d\n", second);
    else
        printf("No second largest distinct value\n");

    return 0;
}