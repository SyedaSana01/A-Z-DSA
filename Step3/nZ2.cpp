#include<bits/stdc++.h>
using namespace std;
void nonZero(vector<int>&a ,int n){
    int j=0;
   
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    nonZero(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
}