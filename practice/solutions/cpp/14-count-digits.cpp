// Count Digits in a Number
// Zero has one digit. The sign of a negative number is not counted.
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    if (n < 0)
        n = -n;

    if (n == 0)
        count = 1;

    while (n > 0) {
        count++;
        n /= 10;
    }

    cout << "Digit count = " << count << endl;
    return 0;
}