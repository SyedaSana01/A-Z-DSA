#include<bits/stdc++.h>
using namespace std;
int Largest(vector<int>a){
    int max=a[0];
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int  main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=Largest(a);
    cout<<ans;
}