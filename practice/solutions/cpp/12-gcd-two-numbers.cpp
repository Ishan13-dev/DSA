// Find the GCD of Two Numbers
// Euclid's algorithm repeatedly replaces (a, b) with (b, a % b).
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a < 0)
        a = -a;

    if (b < 0)
        b = -b;

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    cout << "GCD = " << a << endl;
    return 0;
}