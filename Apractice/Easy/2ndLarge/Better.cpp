#include<bits/stdc++.h>
using namespace std;
void second(int arr[],int n){
    int slarge=INT_MIN ,large=INT_MIN;
    int small2=INT_MAX,small=INT_MAX;
    int i;
    for(i=0;i<n;i++){
        small=min(small,arr[i]);
        large=max(large,arr[i]);
    }
    for( i=0;i<n;i++){
        if(arr[i]<small2 && arr[i]!=small){
            small2=arr[i];
        }
        if(arr[i]>slarge && arr[i]!=large){
            slarge=arr[i];
        }
    }
    cout<<small2 <<endl <<  slarge;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    second(arr,n);
}
