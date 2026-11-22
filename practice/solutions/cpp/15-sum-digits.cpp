// Find the Sum of Digits
// Extract each digit using % 10 and add it to the total.
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    if (n < 0)
        n = -n;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    cout << "Digit sum = " << sum << endl;
    return 0;
}