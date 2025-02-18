#include<bits/stdc++.h>
using namespace std;
int Missing(vector<int>&arr,int k){
    int n=arr.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        int miss=arr[mid]-(mid+1);
        if(miss<k){
            low=mid+1;
        }else{
            high=mid-1;
        }

    }
    return high+1+k;//low+1

}
int main(){
    int n,k;
    cin>>n >>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=Missing(arr,k);
    cout<<ans;
}