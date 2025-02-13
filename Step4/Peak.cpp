#include<bits/stdc++.h>
using namespace std;
int Peak(vector<int>&arr,int n){
    int low=1;
    int high=n-2;
        
        if(arr[0]>arr[1]){
            return arr[0];
        }
        if(arr[n-2]<arr[n-1])
        return arr[n-1];

        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid-1] < arr[mid] && arr[mid] >arr[mid+1]){
                return arr[mid];
            }
            if(arr[mid]>arr[mid-1]){
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
   int ans=Peak(arr,n);
    cout<<ans;
}