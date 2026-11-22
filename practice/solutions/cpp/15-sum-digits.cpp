// Find the Sum of Digits
// Extract each digit using % 10 and add it to the total.
#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;

    long long n = input;
    int sum = 0;

    if (n < 0)
        n = -n;

    while (n > 0) {
        sum += static_cast<int>(n % 10);
        n /= 10;
    }

    cout << "Digit sum = " << sum << endl;
    return 0;
}