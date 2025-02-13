#include<bits/stdc++.h>
using namespace std;
int Sqrt(vector<int> &arr,int n,int target){
    int low=0;
    int high=n;
    int ans=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
        if((mid * mid)<=target){
            ans=mid;
            low=mid+1;


        }else{
            high=mid-1;
        }
    }
    return ans;
}
int main(){
    int n ,target;
    cin>>n >> target;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int ans= Sqrt(arr,n,target);
    cout<<ans;
}