#include<bits/stdc++.h>
using namespace std;

int Once(vector<int>&arr,int N){
    map<int,int>mpp;
    for(int i=0;i<N;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second==1){
            return it.first;
        }
    }
    return -1;

}
int main()
{
    int N;
    cin>>N;
    vector<int>a(N);
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
   int ans= Once(a,N);
   cout<<ans; 
}