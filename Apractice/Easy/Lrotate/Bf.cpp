#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[],int n){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i-1]=arr[i];
        
    }
    temp[n-1]=arr[0];
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
}
int main(){
 int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftRotate(arr,n);
}