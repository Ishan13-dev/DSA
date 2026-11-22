// Find the Maximum Difference Between Array Elements
// Calculate the difference between the largest and smallest values.
#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int largest = a[0];
    int smallest = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > largest)
            largest = a[i];

        if (a[i] < smallest)
            smallest = a[i];
    }

    long long difference = (long long)largest - smallest;
    cout << "Difference = " << difference << endl;
    return 0;
}