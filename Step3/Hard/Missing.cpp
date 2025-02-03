#include<bits/stdc++.h>
using namespace std;
void missing(vector<int>&nums){
    int n=nums.size();
    int repeating=-1;
    int missing=-1;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;i<n-1;j++){
            if(nums[j]==nums[i]){
                cnt++;

            }
            if(cnt==2){
                repeating=i;
            }else if(cnt==0){
                missing=i;
            }
            if(repeating!=-1 && missing!=-1){
                break;
            }
        }
    }
}