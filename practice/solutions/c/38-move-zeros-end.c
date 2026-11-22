// Move All Zeros to the End
#include <stdio.h>

int main() {
    int n, a[100], position = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        if (a[i] != 0)
            a[position++] = a[i];
    }

    while (position < n)
        a[position++] = 0;

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}