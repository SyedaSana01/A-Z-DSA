#include<bits/stdc++.h>
using namespace std;
void sl(int arr[],int n){
   
    sort(arr,arr+n);
    int large= arr[n-2];
    cout<<large;
}
int main(){
    int n;
    cin>>n;
   int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sl(arr,n);
    
}
    
