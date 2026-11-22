// Merge Two Sorted Arrays
#include <stdio.h>

int main() {
    int n, m, a[100], b[100], merged[200];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    while (i < n)
        merged[k++] = a[i++];

    while (j < m)
        merged[k++] = b[j++];

    for (int p = 0; p < k; p++)
        printf("%d ", merged[p]);

    printf("\n");
    return 0;
}