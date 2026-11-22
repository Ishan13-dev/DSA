// Count Digits in a Number
// Zero has one digit. The sign is not counted; long long handles INT_MIN.
#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;

    long long n = input;
    int count = 0;

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