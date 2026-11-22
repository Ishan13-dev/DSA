// Remove Duplicate Characters
// Keep the first occurrence of each character, preserving the original order and spaces.
#include <iostream>
using namespace std;

int main() {
    string s, output;
    bool seen[256] = {false};

    getline(cin, s);

    for (unsigned char ch : s) {
        if (!seen[ch]) {
            seen[ch] = true;
            output += (char)ch;
        }
    }

    cout << "Without duplicates: " << output << endl;
    return 0;
}