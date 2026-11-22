// Find Duplicate Elements in an Array
#include <iostream>
using namespace std;

int main() {
    int n, a[100], shown[100] = {0};
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool found = false;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }

        if (count > 1 && !shown[i]) {
            cout << a[i] << " ";
            found = true;

            for (int j = i; j < n; j++) {
                if (a[i] == a[j])
                    shown[j] = 1;
            }
        }
    }

    if (!found)
        cout << "No duplicates";

    cout << endl;
    return 0;
}