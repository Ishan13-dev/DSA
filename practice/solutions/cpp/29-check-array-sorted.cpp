// Check if an Array is Sorted in Non-Decreasing Order
#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    bool isSorted = true;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            isSorted = false;
            break;
        }
    }

    cout << (isSorted ? "Sorted" : "Not sorted") << endl;
    return 0;
}