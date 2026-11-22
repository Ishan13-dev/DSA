// Find Duplicate Elements in an Array
#include <stdio.h>

int main() {
    int n, a[100], shown[100] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int found = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }

        if (count > 1 && !shown[i]) {
            printf("%d ", a[i]);
            found = 1;

            for (int j = i; j < n; j++) {
                if (a[i] == a[j])
                    shown[j] = 1;
            }
        }
    }

    if (!found)
        printf("No duplicates");

    printf("\n");
    return 0;
}