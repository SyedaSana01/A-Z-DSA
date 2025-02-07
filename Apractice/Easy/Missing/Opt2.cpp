#include<bits/stdc++.h>
using namespace std;

int Missing(vector<int>&arr,int N){
    int xor1=0,xor2=0;
    for(int i=0;i<N-1;i++){
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^N;
    return (xor2^xor1);

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