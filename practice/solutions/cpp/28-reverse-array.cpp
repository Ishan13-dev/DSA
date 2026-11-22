// Reverse an Array
#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int left = 0, right = n - 1;

    while (left < right) {
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;

        left++;
        right--;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;
    return 0;
}