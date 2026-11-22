// Find Intersection of Two Arrays (Unique Values)
#include <iostream>
using namespace std;

int main() {
    int n, m, a[100], b[100], seen[100] = {0};
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;

    for (int i = 0; i < m; i++)
        cin >> b[i];

    bool found = false;

    for (int i = 0; i < n; i++) {
        bool existsInB = false;

        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                existsInB = true;
                break;
            }
        }

        if (existsInB && !seen[i]) {
            cout << a[i] << " ";
            found = true;

            for (int j = i; j < n; j++) {
                if (a[i] == a[j])
                    seen[j] = 1;
            }
        }
    }

    if (!found)
        cout << "No intersection";

    cout << endl;
    return 0;
}