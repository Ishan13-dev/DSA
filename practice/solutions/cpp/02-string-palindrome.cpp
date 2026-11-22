// Check if a String is a Palindrome
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int l = 0, r = (int)s.size() - 1;
    bool isPalindrome = true;

    while (l < r) {
        if (s[l] != s[r]) {
            isPalindrome = false;
            break;
        }
        l++;
        r--;
    }

    if (isPalindrome)
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;

    return 0;
}