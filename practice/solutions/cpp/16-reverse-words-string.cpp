// Reverse Words in a String
// Reverse the word order while keeping each word's letters unchanged.
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string s, word;
    vector<string> words;

    getline(cin, s);
    stringstream ss(s);

    while (ss >> word)
        words.push_back(word);

    for (int i = (int)words.size() - 1; i >= 0; i--) {
        cout << words[i];

        if (i > 0)
            cout << " ";
    }

    cout << endl;
    return 0;
}