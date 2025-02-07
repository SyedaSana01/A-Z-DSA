#include<bits/stdc++.h>
using namespace std;

int Missing(vector<int>&a,int N){
     
    for(int i=0;i<=N;i++){
        int flag=0;
       
        for(int j=0;j<N;j++){
            if(a[j]==i){
            flag=1;
            break;
            }
        }
         if(flag==0){
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
   
    
