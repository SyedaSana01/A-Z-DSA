#include<bits/stdc++.h>
using namespace std;
int Missing(vector<int> &arr,int N){
    int  Hash[N+1]={0};

    for(int i=0;i<N-1;i++){
        Hash[arr[i]]++;
    }
        for(int i=1;i<=N;i++){
           if(Hash[i]==0){
            return i;
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
   int ans= Missing(a,N);
   cout<<ans; 
}
   