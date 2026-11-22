// Count Character Frequency
// Count characters including spaces and punctuation. Display only characters that appear.
#include <iostream>
using namespace std;

int main() {
    string s;
    int frequency[256] = {0};

    getline(cin, s);

    for (unsigned char ch : s)
        frequency[ch]++;

    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            if (i >= 32 && i <= 126)
                cout << "'" << (char)i << "' : " << frequency[i] << endl;
            else
                cout << "ASCII " << i << " : " << frequency[i] << endl;
        }
    }

    return 0;
}