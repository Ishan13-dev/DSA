// Print Prime Numbers in a Range
#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for (int n = start; n <= end; n++) {
        bool isPrime = (n >= 2);

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            cout << n << " ";
    }

    cout << endl;
    return 0;
}