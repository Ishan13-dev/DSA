// Find Intersection of Two Arrays (Unique Values)
#include <stdio.h>

int main() {
    int n, m, a[100], b[100], seen[100] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    int found = 0;

    for (int i = 0; i < n; i++) {
        int existsInB = 0;

        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                existsInB = 1;
                break;
            }
        }

        if (existsInB && !seen[i]) {
            printf("%d ", a[i]);
            found = 1;

            for (int j = i; j < n; j++) {
                if (a[i] == a[j])
                    seen[j] = 1;
            }
        }
    }

    if (!found)
        printf("No intersection");

    printf("\n");
    return 0;
}