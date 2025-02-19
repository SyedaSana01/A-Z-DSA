#include<bits/stdc++.h>
using namespace std;
int Min(vector<int>&arr,int n){
    int high=n-1;
    int low=0;
    int ans=INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[high]){
            ans=min(ans,arr[low]);
            break;
           
        }

        if(arr[low]<=arr[mid]){
            ans=min(ans,arr[low]);
           low=mid+1;
        }else{
            high=mid-1;
            ans=min(ans,arr[mid]);
        }
        
    }
    return ans;
}
int main(){
    int n ;
    cin>>n ;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int ans= Min(arr,n);
    cout<<ans;
}