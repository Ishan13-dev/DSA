// Find a Pair with the Given Sum
#include <iostream>
using namespace std;

int main() {
    int n, a[100], target;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> target;

    int found = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long pairSum = (long long)a[i] + a[j];

            if (pairSum == target) {
                cout << a[i] << " " << a[j] << endl;
                found = 1;
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