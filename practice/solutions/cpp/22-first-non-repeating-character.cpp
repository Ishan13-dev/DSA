// Find First Non-Repeating Character
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> count(256, 0);

    for (char ch : s)
        count[(unsigned char)ch]++;

    for (char ch : s) {
        if (count[(unsigned char)ch] == 1) {
            cout << ch << endl;
            return 0;
        }
    }

    cout << "No non-repeating character" << endl;
    return 0;
}