// Find Frequency of Array Elements
#include <iostream>
using namespace std;

int main() {
    int n, a[100], shown[100] = {0};
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (!shown[i]) {
            int count = 0;

            for (int j = 0; j < n; j++) {
                if (a[i] == a[j])
                    count++;
            }

            cout << a[i] << " occurs " << count << " times" << endl;

            for (int j = i; j < n; j++) {
                if (a[i] == a[j])
                    shown[j] = 1;
            }
        }
    }

    return 0;
}