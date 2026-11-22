// Check if Two Strings are Anagrams
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    if (a.size() != b.size()) {
        cout << "Not anagrams" << endl;
        return 0;
    }

    vector<int> count(256, 0);

    for (int i = 0; i < (int)a.size(); i++) {
        count[(unsigned char)a[i]]++;
        count[(unsigned char)b[i]]--;
    }

    bool isAnagram = true;

    for (int value : count) {
        if (value != 0) {
            isAnagram = false;
            break;
        }
    }

    cout << (isAnagram ? "Anagrams" : "Not anagrams") << endl;
    return 0;
}