#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int>&arr,int target,int n){
    int low=0;
    int high=n-1;
   
        while(low<=high){
                int mid=(low+high)/2;
                if(arr[mid]==target){
                    return mid;


            }else if(target>mid){
                low=mid+1;
            }else{
                high=mid-1;
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
   int ans= BinarySearch(arr,target,n);
    cout<<ans;
    

}