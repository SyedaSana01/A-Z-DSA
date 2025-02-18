#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int>& arr, int day, int r, int b) {
    int cnt = 0, Bo = 0;  
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= day) {
            cnt++;  
            if (cnt == b) {  
                Bo++;  
                cnt = 0;  
            }
        } else {
            cnt = 0;  
        }
    }
    return Bo >= r;  
}

int roseGarden(vector<int>& arr, int r, int b) {
    long long val = 1LL * r * b;
    if (val > arr.size()) return -1;  

    int mini = *min_element(arr.begin(), arr.end());
    int maxi = *max_element(arr.begin(), arr.end());

    int low = mini, high = maxi, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (possible(arr, mid, r, b)) {
            ans = mid;  // Update answer
            high = mid - 1;  // Try for a smaller day
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, r, b;
    cin >> n >> r >> b;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = roseGarden(arr, r, b);
    cout << ans << endl;
}

