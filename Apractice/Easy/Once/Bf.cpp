#include<bits/stdc++.h>
using namespace std;
 
int Once(vector<int> &arr,int N){
    for(int i=0;i<N;i++){
        int num=arr[i];
        int cnt=0;
        for(int j=0;j<N;j++){
            if(arr[j]==num){
                cnt++;
            }

        }
        if(cnt==1){
            return num;
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
