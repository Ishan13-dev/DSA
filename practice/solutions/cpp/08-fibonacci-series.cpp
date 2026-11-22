// Fibonacci Series
// This program prints up to 93 terms (F0 through F92) safely.
#include <iostream>
using namespace std;

int main() {
    int n;
    long long a = 0, b = 1;
    cin >> n;

    if (n < 0) {
        cout << "Invalid input" << endl;
        return 0;
    }

    if (n > 93) {
        cout << "Input too large (maximum is 93 terms)" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << a << " ";

        long long next = a + b;
        a = b;
        b = next;
    }

    cout << endl;
    return 0;
}