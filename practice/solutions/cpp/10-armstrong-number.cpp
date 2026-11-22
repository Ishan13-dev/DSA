// Check if a Number is Armstrong
#include <iostream>
using namespace std;

int main() {
    int n, original, digits = 0, sum = 0;
    cin >> n;

    original = n;
    int temp = n;

    if (temp == 0)
        digits = 1;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;

        for (int i = 0; i < digits; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    }

    if (original == sum)
        cout << "Armstrong number" << endl;
    else
        cout << "Not an Armstrong number" << endl;

    return 0;
}