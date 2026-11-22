// Find Union of Two Arrays (Unique Values)
#include <stdio.h>

int main() {
    int n, m, a[100], b[100], result[200], count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < n; i++) {
        int alreadyAdded = 0;

        for (int j = 0; j < count; j++) {
            if (result[j] == a[i]) {
                alreadyAdded = 1;
                break;
            }
        }

        if (!alreadyAdded)
            result[count++] = a[i];
    }

    for (int i = 0; i < m; i++) {
        int alreadyAdded = 0;

        for (int j = 0; j < count; j++) {
            if (result[j] == b[i]) {
                alreadyAdded = 1;
                break;
            }
        }

        if (!alreadyAdded)
            result[count++] = b[i];
    }

    for (int i = 0; i < count; i++)
        printf("%d ", result[i]);

    printf("\n");
    return 0;
}