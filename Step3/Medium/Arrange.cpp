#include<bits/stdc++.h>
using namespace std;
vector<int>Arrange(vector<int>&nums){
    int n=nums.size();
    int pos=0;
    int neg=1;
    vector<int>ans(n,0);
    for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            ans[neg]=nums[i];
            neg+=2;
        }else{
            ans[pos]=nums[i];
            pos+=1;
        }
    }
    return ans;
}
