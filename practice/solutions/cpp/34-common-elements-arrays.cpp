// Find Common Elements in Two Arrays (Unique Values)
#include <iostream>
using namespace std;

int main() {
    int n, m, a[100], b[100], common[100], count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;

    for (int i = 0; i < m; i++)
        cin >> b[i];

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
        cout << "No common elements";
    else {
        for (int i = 0; i < count; i++)
            cout << common[i] << " ";
    }

    cout << endl;
    return 0;
}