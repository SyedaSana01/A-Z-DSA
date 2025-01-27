#include<bits/stdc++.h>
using namespace std;
vector<int> Leader(vector<int>arr){
    int maxi=INT_MIN;
    vector<int> ans;
    int n=arr.size();
    for(int i=n-1;i<arr.size();i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);

    }
    sort(ans.begin(),ans.end());
    return ans;
}
