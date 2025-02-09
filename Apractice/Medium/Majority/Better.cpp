#include<bits/stdc++.h>
using namespace std;
int Major(vector<int>&arr,int n){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    
    for(auto it:mpp){
        if(it.second>(n/2)){
            return arr[i];
        }
    }
}
return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 int ans=Major(arr,n);
 cout<<ans;
}