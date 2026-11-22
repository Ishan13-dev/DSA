// Factorial of a Number
// 20! is the largest factorial that fits in a signed long long.
#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers" << endl;
        return 0;
    }

    if (n > 20) {
        cout << "Input too large (maximum is 20)" << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++)
        factorial *= i;

    cout << factorial << endl;
    return 0;
}