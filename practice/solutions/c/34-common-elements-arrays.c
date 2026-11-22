// Find Common Elements in Two Arrays
#include <stdio.h>

int main() {
    int n, m, a[100], b[100], printed[100] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    int found = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j] && !printed[i]) {
                printf("%d ", a[i]);
                printed[i] = 1;
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("No common elements");

    printf("\n");
    return 0;
}