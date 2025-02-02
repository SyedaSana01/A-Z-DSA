#include<bits/stdc++.h>
using namespace std;
int SubArray(vector<int>a,int k){
    map<int,int>mpp;
    int xr=0;
    mpp[xr]++;
    int cnt=0;
    for(int i=0;i<a.size();i++){
        xr=xr^a[i];
        int x=xr^k;
        cnt+=mpp[x];


    }
    return cnt;
}