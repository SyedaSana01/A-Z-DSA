#include<bits/stdc++.h>
using namespace std;
int twice(vector<int>&a,int n){
   int count=0;
   
    for(int i=0;i<n;i++){
    
    for(int j=0;j<n;j++){
        if(a[i]==a[j]){
            count++;
        }
    }
    if(count==1){
        return a[i];
    }

    } 
     
   
}

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
cin>>a[i];
    }
    int result=twice(a,n);
    cout<<result;
}