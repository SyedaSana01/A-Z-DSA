#include<bits/stdc++.h>
using namespace std;
vector<int>Inter(vector<int>&a,vector<int>&b,int n){
vector<int>ans;
int vis[n]={0};
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[i]=b[j]&& vis[j]==0){
            ans.push_back(a[i]);
            vis[j]=1;
            break;

        }

      if(b[j]<a[i]){
        break;
      }
    }

}
return ans;

}