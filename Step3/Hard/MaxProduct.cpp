#include<bits/stdc++.h>
using namespace std;
int subarray(vector<int>&a){
    int pre=1;
    int suf=1;
    int n=a.size();
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(pre==0){
            pre=1;
        }
        if(suf==0){
            suf=1;


        }
        pre=pre * a[i];
        suf=suf * a[n-i-1];
        ans=max(ans,max(pre,suf));

    }
    return ans;
}