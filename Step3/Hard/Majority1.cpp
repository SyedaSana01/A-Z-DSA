#include<bits/stdc++.h>
using namespace std;
vector<int> major(int arr[],int n){
    vector<int>list;
    for(int i=0;i<n-1;i++){
        if(arr[i]==0 || arr[0]!=arr[i]){
            int cnt=0;
        
        for(int j=0;j<n-1;j++){
            if(arr[j]==arr[i]){
                cnt++;
            }
            
        }
        if(cnt>2){
            break;
        }
        if(cnt>=n/3){
          list.push_back(arr[i]);
        }
    }
    return list;
}
}