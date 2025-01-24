#include<bits/stdc++.h>
using namespace std;
vector<int>miss(vector<int>&a,int n){
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(a[j]==i){
                flag=1;
                break;
            }
        }
        flag=1;
    }
}