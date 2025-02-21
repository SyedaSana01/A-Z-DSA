#include <bits/stdc++.h>
using namespace std;

// Function to find the row index of the maximum element in a column
int maxElement(vector<vector<int>> &matrix, int n, int m, int col) {
    int maxValue = INT_MIN;
    int index = -1;
    
    for (int i = 0; i < n; i++) {
        if (matrix[i][col] > maxValue) {
            maxValue = matrix[i][col];
            index = i;
        }
    }

    cout << "Max in column " << col << " is " << maxValue << " at row " << index << endl;
    return index;
}

// Function to find the peak element in a 2D matrix
vector<int> Peak(vector<vector<int>> &matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    int low = 0, high = m - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int rowI = maxElement(matrix, n, m, mid);

        int left = (mid - 1 >= 0) ? matrix[rowI][mid - 1] : INT_MIN;
        int right = (mid + 1 < m) ? matrix[rowI][mid + 1] : INT_MIN;

        cout << "Checking peak at (" << rowI << ", " << mid << ") -> " << matrix[rowI][mid] << endl;
        cout << "Left: " << left << ", Right: " << right << endl;

        if (matrix[rowI][mid] > left && matrix[rowI][mid] > right) {
            return {rowI, mid};
        } else if (matrix[rowI][mid] < left) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return {-1, -1}; // If no peak is found (should not happen for valid input)
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    vector<int> ans = Peak(matrix);

    cout << "Peak element found at: " << ans[0] << " " << ans[1] << endl;

    return 0;
}
