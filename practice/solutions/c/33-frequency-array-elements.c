// Find Frequency of Array Elements
#include <stdio.h>

int main() {
    int n, a[100], shown[100] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        if (!shown[i]) {
            int count = 0;

            for (int j = 0; j < n; j++) {
                if (a[i] == a[j])
                    count++;
            }

            printf("%d occurs %d times\n", a[i], count);

            for (int j = i; j < n; j++) {
                if (a[i] == a[j])
                    shown[j] = 1;
            }
        }
    }

    return 0;
}