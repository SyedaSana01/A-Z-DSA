#include<bits/stdc++.h>
using namespace std;
int SearchInsert(vector<int>&arr,int n,int m){
    int low=0;
    int high=n-1;
     int ans=n;
    while(low<=high){
        
        int mid=(low+high)/2;
        if(arr[mid]>=m){
            ans=mid;
            high=mid-1;

        }else {
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
   int ans=SearchInsert(arr,target,n);
   cout<<ans;
 
    
}
