// Find Duplicate Characters
// Print each repeated character once with its count. Spaces are ignored.
#include <iostream>
using namespace std;

int main() {
    string s;
    int frequency[256] = {0};
    int shown[256] = {0};
    bool found = false;

    getline(cin, s);

    for (unsigned char ch : s) {
        if (ch != ' ')
            frequency[ch]++;
    }

    for (unsigned char ch : s) {
        if (ch != ' ' && frequency[ch] > 1 && !shown[ch]) {
            cout << ch << " appears " << frequency[ch] << " times" << endl;
            shown[ch] = 1;
            found = true;
        }
    }

    if (!found)
        cout << "No duplicate characters" << endl;

    return 0;
}