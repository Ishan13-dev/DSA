// Find Common Elements in Two Arrays
#include <iostream>
using namespace std;

int main() {
    int n, m, a[100], b[100], printed[100] = {0};
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;

    for (int i = 0; i < m; i++)
        cin >> b[i];

    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j] && !printed[i]) {
                cout << a[i] << " ";
                printed[i] = 1;
                found = true;
                break;
            }
        }
    }

    if (!found)
        cout << "No common elements";

    cout << endl;
    return 0;
}