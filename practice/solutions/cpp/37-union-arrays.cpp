// Find Union of Two Arrays (Unique Values)
#include <iostream>
using namespace std;

int main() {
    int n, m, a[100], b[100], result[200], count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;

    for (int i = 0; i < m; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++) {
        bool alreadyAdded = false;

        for (int j = 0; j < count; j++) {
            if (result[j] == a[i]) {
                alreadyAdded = true;
                break;
            }
        }

        if (!alreadyAdded)
            result[count++] = a[i];
    }

    for (int i = 0; i < m; i++) {
        bool alreadyAdded = false;

        for (int j = 0; j < count; j++) {
            if (result[j] == b[i]) {
                alreadyAdded = true;
                break;
            }
        }

        if (!alreadyAdded)
            result[count++] = b[i];
    }

    for (int i = 0; i < count; i++)
        cout << result[i] << " ";

    cout << endl;
    return 0;
}