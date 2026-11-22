// Find Common Elements in Two Arrays (Unique Values)
#include <stdio.h>

int main() {
    int n, m, a[100], b[100], common[100], count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < n; i++) {
        int existsInB = 0;
        int alreadyPrinted = 0;

        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                existsInB = 1;
                break;
            }
        }

        for (int j = 0; j < count; j++) {
            if (common[j] == a[i]) {
                alreadyPrinted = 1;
                break;
            }
        }

        if (existsInB && !alreadyPrinted)
            common[count++] = a[i];
    }

    if (count == 0)
        printf("No common elements");
    else {
        for (int i = 0; i < count; i++)
            printf("%d ", common[i]);
    }

    printf("\n");
    return 0;
}