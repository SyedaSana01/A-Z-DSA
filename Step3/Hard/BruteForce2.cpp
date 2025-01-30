#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>BF(vector<int>&num,int n){
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        set<int>hashset;
        for(int j=i+1;j<n;j++){
            int third=-(num[i]+num[j]);
            if(hashset.find(third)!=hashset.end()){
                vector<int>temp={num[i],num[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
              hashset.insert(num[j]);


        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
       
       
    }
}