// Find the Maximum Difference Between Array Elements
// Calculate the difference between the largest and smallest values.
#include <stdio.h>

int main() {
    int n, a[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int largest = a[0];
    int smallest = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > largest)
            largest = a[i];

        if (a[i] < smallest)
            smallest = a[i];
    }

    printf("Difference = %d\n", largest - smallest);
    return 0;
}