#include<bits/stdc++.h>
using namespace std;
int Rsearch(vector<int>&arr,int n,int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        //left sorted
        if(arr[low]<=arr[mid]){
            if(arr[low]<=target && target<=arr[mid]){
                high=mid-1;
            }else{
                low=mid+1;

            }

        }else{
            if(arr[mid]<=target && target<=arr[high]){
                low=mid+1;

            }else{
                high=mid-1;
            }
        }
       

    }
   
return -1;
}
int main(){
    int n ,target;
    cin>>n >> target;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int ans= Rsearch(arr,n,target);
    cout<<ans;
}