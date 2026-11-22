// Find Largest Element in an Array
#include <stdio.h>

int main() {
    int n, a[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int largest = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > largest)
            largest = a[i];
    }

    printf("%d\n", largest);
    return 0;
}