#include <bits/stdc++.h>
using namespace std;

void print5(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i + 1; j++) { // Fix loop to ensure the correct number of stars
            cout << "* ";
        }
        cout << endl; // Move to the next line after each row
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    print5(n);
    return 0;
}
