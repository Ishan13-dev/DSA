// Find Second Largest Distinct Element
#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int largest = a[0], second = 0;
    bool found = false;

    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
            found = true;
        } else if (a[i] < largest && (!found || a[i] > second)) {
            second = a[i];
            found = true;
        }
    }

    if (found)
        cout << second << endl;
    else
        cout << "No second largest distinct value" << endl;

    return 0;
}