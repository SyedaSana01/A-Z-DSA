#include<bits/stdc++.h>
using  namespace std;
vector<int> Sum(vector<int>&nums,int target){
    map<int ,int>mpp;
    for(int i=0;i<nums.size();i++){
        int num=nums[i];
        int moreNeeded=target-num;
        if(mpp.find(moreNeeded)!=mpp.end()){
            return {mpp[moreNeeded],i};
        }
        mpp[num]=i;
        
    }
    return {-1,-1};
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
  int target;
  cin>>target;
    vector<int> result=Sum(nums,target);
    
    if (result[0] != -1) {
        
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No two numbers add up to the target." << endl;
    }

    return 0;
   
}