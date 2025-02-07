#include<bits/stdc++.h>
using namespace std;

void Reverse(int arr[],int start,int end){
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void RotateK(int arr[],int k,int n){
    k=k%n;
    Reverse(arr,0,n-k-1);
    Reverse(arr,n-k,n-1);
    Reverse(arr,0,n-1);
   
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    RotateK(arr,k,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }

}