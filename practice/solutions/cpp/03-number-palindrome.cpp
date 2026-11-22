// Check if a Number is a Palindrome
#include <iostream>
using namespace std;

int main() {
    int n, original, reversed = 0;
    cin >> n;

    original = n;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (original == reversed)
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;

    return 0;
}