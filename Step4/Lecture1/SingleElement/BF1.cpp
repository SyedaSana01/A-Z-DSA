#include<bits/stdc++.h>
using namespace std;
int SE(vector<int>&arr,int n){
    if(n==0) return arr[0];
    for(int i=0;i<n;i++){
    if(arr[i]==0){
        if(arr[i]!=arr[i+1]){
            return arr[i];
        }
    }else if(arr[i]==n-1){
        if(arr[i]!=arr[i-1]){
            return arr[i];
        }
    }else{
        if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){
            return arr[i];
        }
    }
}
return -1;
}
int main(){
    int n ;
    cin>>n ;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int ans=SE(arr,n);
    cout<<ans;
}