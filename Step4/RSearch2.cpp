#include<bits/stdc++.h>
using namespace std;
int RS2(vector<int>&arr,int n,int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low++;
            high--;
            continue;
        }
        if(arr[low]<=target  && target <=arr[mid]){
            high=mid-1;
        }else{
            low=mid+1;
        }
        if(arr[mid]<=target && target<=arr[high]){
            low=mid+1;
        }else{
            high=mid-1;
        }
        
    }
    return 0;
}
int main(){
    int n ,target;
    cin>>n >> target;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int ans= RS2(arr,n,target);
    cout<<ans;
}