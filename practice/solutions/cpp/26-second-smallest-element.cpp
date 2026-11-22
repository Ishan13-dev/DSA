// Find Second Smallest Distinct Element
#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int smallest = a[0], second = 0;
    bool found = false;

    for (int i = 1; i < n; i++) {
        if (a[i] < smallest) {
            second = smallest;
            smallest = a[i];
            found = true;
        } else if (a[i] > smallest && (!found || a[i] < second)) {
            second = a[i];
            found = true;
        }
    }

    if (found)
        cout << second << endl;
    else
        cout << "No second smallest distinct value" << endl;

    return 0;
}