#include<bits/stdc++.h>
using namespace std;
string Sum2(vector<int>&arr,int target){
    sort(arr.begin(),arr.end());
    int n=arr.size();
    int left=0;
    int right=n-1;
    
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            return "YES";
        }
        else if(sum<target){
            left++;
        }else{
            right--;
        }
        
    }
    return "NO";
}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
   string ans= Sum2(arr,target);
   cout<<ans;
}