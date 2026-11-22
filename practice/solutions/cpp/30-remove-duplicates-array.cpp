// Remove Duplicate Elements, Keeping the First Occurrence
#include <iostream>
using namespace std;

int main() {
    int n, a[100], unique[100], count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        bool alreadyExists = false;

        for (int j = 0; j < count; j++) {
            if (a[i] == unique[j]) {
                alreadyExists = true;
                break;
            }
        }

        if (!alreadyExists)
            unique[count++] = a[i];
    }

    for (int i = 0; i < count; i++)
        cout << unique[i] << " ";

    cout << endl;
    return 0;
}