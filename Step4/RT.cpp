#include<bits/stdc++.h>
using namespace std;
int RT(vector<int>&arr,int n){
    int high=n-1;
    int low =0;
    int ans=INT_MAX;
    int index= -1;

    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[high]){
            if(arr[low]<ans){
                index=low;
           ans=arr[low];

            }
            break;

        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<ans){
                index=low;
                ans=arr[low];
            }  
           
            low=mid+1;
        }else{
            
            if(arr[mid]<ans){
                index=mid;
                ans=arr[mid];
            }
            high=mid-1;
        }
    }
    return index;
}
int main(){
    int n ;
    cin>>n ;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int ans=RT(arr,n);
    cout<<ans;
}