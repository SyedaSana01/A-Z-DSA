#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>Sum2(vector<int>&nums,int target){
    int n=nums.size();
set<vector<int>>st;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        for(int k=j+1;k<n;j++){
            int sum=nums[i]+nums[j]+nums[k];
            int fourth=target-(sum);
            set<long long>hashset;
            if(hashset.find(fourth)!=hashset.end()){
                vector<int>temp={nums[i],nums[j],nums[k],fourth};
                sort(temp.begin(),temp.end());
                st.insert(temp);

            }
            hashset.insert(nums[k]);

        }
    }
}
vector<vector<int>>ans(st.begin(),st.end());
return ans;
}