// Merge Two Sorted Arrays
#include <iostream>
using namespace std;

int main() {
    int n, m, a[100], b[100], merged[200];
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;

    for (int i = 0; i < m; i++)
        cin >> b[i];

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
        cout << merged[p] << " ";

    cout << endl;
    return 0;
}