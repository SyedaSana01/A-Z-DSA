#include<bits/stdc++.h>
using namespace std;
int Missing(vector<int>&arr,int N){
    int sum=(N * (N+1))/2;
    int s2=0;
    for(int i=0;i<N-1;i++){
        s2+=arr[i];
    }
    int FindMissing=sum-s2;
    return FindMissing;
}
int main()
{
    int N;
    cin>>N;
    vector<int>a(N);
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
   int ans= Missing(a,N);
   cout<<ans; 
}