#include <bits/stdc++.h>
using namespace std;

void print8(int n) {
    for (int i = 0; i < n; i++) {
        // Print spaces before stars
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            cout << "*";
        }
        cout << endl; // Move to the next row
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    print8(n);
    return 0;
}
