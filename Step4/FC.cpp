#include<bits/stdc++.h>
using namespace std;
int Ceil(vector<int> &arr,int n,int m){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){

        int  mid=(low+high)/2;
        if(arr[mid]>=m){
            ans= mid;
            high=mid-1;   

        }else{
            low=mid+1;
        }
    }
    return ans;
}
int Floor(vector<int>&arr,int n,int m){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){

        int  mid=(low+high)/2;
        if(arr[mid]<=m){
            ans= mid;
            low=mid+1;   

        }else{
            high=mid-1;
        }
    }
    return ans;

}
int main(){
    int n ,m;
    cin>>n >>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int ans1=Ceil(arr,n,m);
   cout<<ans1<<endl;
   int ans2=Floor(arr,n,m);
   cout<<ans2<<endl;

 
    

}
