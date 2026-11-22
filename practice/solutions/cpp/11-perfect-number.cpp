// Check if a Number is Perfect
// A perfect number equals the sum of its positive divisors excluding itself.
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    if (n > 1) {
        for (int divisor = 1; divisor <= n / 2; divisor++) {
            if (n % divisor == 0)
                sum += divisor;
        }
    }

    if (n > 1 && sum == n)
        cout << "Perfect number" << endl;
    else
        cout << "Not a perfect number" << endl;

    return 0;
}