// Reverse an Integer
// Store the reversed value in long long to avoid 32-bit integer overflow.
#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;

    long long n = input;
    long long reversed = 0;

    while (n != 0) {
        int digit = static_cast<int>(n % 10);
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    cout << reversed << endl;
    return 0;
}