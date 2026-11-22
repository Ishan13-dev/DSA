// Find the LCM of Two Numbers
// LCM(a, b) = |a * b| / GCD(a, b). If either number is zero, LCM is zero.
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int x = (a < 0) ? -a : a;
    int y = (b < 0) ? -b : b;

    int p = x, q = y;

    while (q != 0) {
        int remainder = p % q;
        p = q;
        q = remainder;
    }

    if (x == 0 || y == 0)
        cout << "LCM = 0" << endl;
    else
        cout << "LCM = " << (x / p) * y << endl;

    return 0;
}