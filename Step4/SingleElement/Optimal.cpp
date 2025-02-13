#include<bits/stdc++.h>
using namespace std;
int SE(vector<int>&arr,int n){
    int low=1;
    int high=n-2;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1]){
            return arr[mid];

        }
        if(arr[mid]%2==1 && arr[mid-1]!=arr[mid] 
        || arr[mid]%2==0 && arr[mid]==arr[mid+1]){
            low=mid+1;
        }else{
            high=mid-1;
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