// Remove Duplicate Elements, Keeping the First Occurrence
#include <stdio.h>

int main() {
    int n, a[100], unique[100], count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        int alreadyExists = 0;

        for (int j = 0; j < count; j++) {
            if (a[i] == unique[j]) {
                alreadyExists = 1;
                break;
            }
        }

        if (!alreadyExists)
            unique[count++] = a[i];
    }

    for (int i = 0; i < count; i++)
        printf("%d ", unique[i]);

    printf("\n");
    return 0;
}