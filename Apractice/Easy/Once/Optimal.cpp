#include<bits/stdc++.h>
using namespace std;
int Once(vector<int>&arr,int N){
    int xorr=0;
    for(int i=0;i<N;i++){
        xorr=xorr^arr[i];
    }
    return xorr;

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
