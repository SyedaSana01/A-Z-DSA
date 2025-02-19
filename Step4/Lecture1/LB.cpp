#include<bits/stdc++.h>
using namespace std;
int LB(vector<int>&arr,int target,int n){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=target){
            ans= mid;
            high=mid-1;   

        }else{
            low=mid+1;
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
   int ans=LB(arr,target,n);
   cout<<ans;
 
    

}