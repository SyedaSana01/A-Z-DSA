#include<bits/stdc++.h>
using namespace std;

vector<int>Rpair(vector<int>a){
    int cnt=0;
    int n=a.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
            if(a[i]>2*a[j]){
                cnt++;
            }
        }

    }
}