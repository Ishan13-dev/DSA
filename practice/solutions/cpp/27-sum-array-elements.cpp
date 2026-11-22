// Sum of Array Elements
// Use long long to reduce overflow risk for sums of integer values.
#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    long long sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    cout << sum << endl;
    return 0;
}