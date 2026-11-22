// Find the LCM of Two Numbers
// Use long long to avoid overflow when taking absolute values or multiplying.
#include <iostream>
using namespace std;

int main() {
    int inputA, inputB;
    cin >> inputA >> inputB;

    long long x = inputA;
    long long y = inputB;

    if (x < 0)
        x = -x;

    if (y < 0)
        y = -y;

    long long p = x, q = y;

    while (q != 0) {
        long long remainder = p % q;
        p = q;
        q = remainder;
    }

    if (x == 0 || y == 0)
        cout << "LCM = 0" << endl;
    else
        cout << "LCM = " << (x / p) * y << endl;

    return 0;
}