#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>Merge(vector<int>arr){
    
    int n=arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        int start=arr[i][0];
        int end=arr[i][1];
        if(!ans.empty()&&ans.back()[1]){
            continue;
        }
        for(int j=i+1;i<n;j++){
            if(arr[j][0]<=end){
                end=max(end,arr[j][1]);
            }else{
                break;
            }
        }

    }
}