#include<bits/stdc++.h>
using namespace std;
int First(vector<int>&arr,int n,int m){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=m){
            ans= mid;
            high=mid-1;   

        }else{
            low=mid+1;
        }
    }
    return ans;
}

int Last(vector<int>&arr,int n,int m){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>m){
            ans= mid;
            high=mid-1;   

        }else{
            low=mid+1;
        }
    }
    return ans;
}

int main(){
    int n ,m;
    cin>>n >> m;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int first=First(arr,n,m);
   int last=Last(arr,n,m);
   if(first==n || arr[first]!=m){
    return -1;
   }else{
    cout<<first << " " << (last-1) << endl;
    }
   

}