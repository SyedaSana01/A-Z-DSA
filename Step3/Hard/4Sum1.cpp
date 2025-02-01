#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>Sum4(vector<int>&nums,int target){
    set<vector<int>>st;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;j<n;j++){
                for(int l=k+1;k<n;k++){
                    int sum=nums[i]+nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum==target){
                        vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }

                }
            }
        }
    }
  vector<vector<int>>ans(st.begin(),st.end());
    return ans;

}