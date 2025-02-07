#include<bits/stdc++.h>
using namespace std;
int Cons(int arr[],int n){
   int maxi=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
        }else{
            cnt=0;
        }
        maxi=max(maxi,cnt);
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int ans=Cons(arr,n);
    cout<<ans;

}