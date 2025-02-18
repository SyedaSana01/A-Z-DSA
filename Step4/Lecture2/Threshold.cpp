#include<bits/stdc++.h>
using namespace std;
int sumofD(vector<int>&arr,int div){
    int sum=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        sum=sum+ceil((double)arr[i]/(double)div);
    }
    return sum;
}
int Th(vector<int>&arr,int limit){
    int low=1;
   int high=*max(arr.begin(),arr.end());
   while(low<high){
   int mid=(low+high)/2;
   if(sumofD(arr,mid)){
    high=mid-1;
   }else{
    low=mid+1;
   }
   }
   return low;
}
int main(){
    int n , limit;
    cin>> n >> limit;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=Th(arr,limit);
    cout<<ans;
}
