#include<bits/stdc++.h>
using namespace std;
int Major(vector<int>a,int n){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }
    for(auto it:mpp){
        if(it.second>n/2){
            return it.first;
        }

    }
    return -1;
}
