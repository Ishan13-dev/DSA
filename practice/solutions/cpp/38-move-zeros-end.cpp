// Move All Zeros to the End
#include <iostream>
using namespace std;

int main() {
    int n, a[100], position = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (a[i] != 0)
            a[position++] = a[i];
    }

    while (position < n)
        a[position++] = 0;

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
    return 0;
}