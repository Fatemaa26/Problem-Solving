#include<iostream>
using namespace std;

int main() {
    long long i, n, num[100000];

    // Enter n
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> num[i];
    }

    bool result = true;

    // Check if the array is non-decreasing
    for (i = 0; i < n - 1; i++) {
        if (num[i] > num[i + 1]) {
            result = false;
            break;
        }
    }

    if (result) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
