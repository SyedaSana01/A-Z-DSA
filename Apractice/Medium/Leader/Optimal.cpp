#include<bits/stdc++.h>
using namespace std;
vector<int>Leader(vector<int>&a,int n){
    vector<int>ans;
    int max=a[n-1];
    ans.push_back(a[n-1]);
    for(int i=n-2;i>=0;i--){
        if(a[i]>max){
            ans.push_back(a[i]);
            max=a[i];
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      vector<int> ans=Leader(arr,n);
      for(int leaders : ans){
        cout<<leaders << " ";
        
      }
      
    }