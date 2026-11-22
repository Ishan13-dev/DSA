// Find a Pair with the Given Sum
#include <iostream>
using namespace std;

int main() {
    int n, a[100], target;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> target;

    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) {
                cout << a[i] << " " << a[j] << endl;
                found = true;
                break;
            }
        }

        if (found)
            break;
    }

    if (!found)
        cout << "No pair found" << endl;

    return 0;
}