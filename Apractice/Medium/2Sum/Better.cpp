#include<bits/stdc++.h>
using namespace std;
string Sum2(vector<int>&arr,int target){
    
    unordered_map<int,int>mpp;
    for(int i=0;i<arr.size();i++){
        int num=arr[i];
        int rem=target-num;
        if(mpp.find(rem)!=mpp.end()){
            return "YES";
        }
        mpp[num]=i;
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

