#include<bits/stdc++.h>
using namespace std;
vector<int>Insert(vector<int>&a,vector<int>&b,int n){
    int i=0;
    int j=0;
    vector<int>ans;
    while(i<n && j<n){
    if(a[i]<b[j]){
        i++;
    }
    else if(a[i]>b[j]){
        j++;
    }
else{
    ans.push_back(a[i]);
}
        
    }
    return ans;   
}
