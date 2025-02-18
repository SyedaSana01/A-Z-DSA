#include<bits/stdc++.h>
using namespace std;
int findMax(vector<int>&arr){
    int maxi=INT_MIN;
    int n=arr.size();
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
        

    }
    return maxi;
}
int CalculateHours(vector<int>&arr,int hourly){
    int TH=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        TH+=ceil((double) arr[i]/(double)hourly);


    }
    return TH;
}
int minB(vector<int>&arr,int h){
    int low=1;
    int high =findMax(arr);
    while(low<=high){
        int mid=(low+high)/2;
        int th=CalculateHours(arr,mid);
        if(th<=h){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return low;
}
int main(){
    int n ;
    cin>>n ;
    int h;
    cin>>h;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int ans= minB(arr,h);
    cout<<ans;
}