#include <bits/stdc++.h>
using namespace std;

void print7(int n) {
    for (int i = 0; i < n; i++) {
        // Print spaces before stars
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    print7(n);
    return 0;
}
