#include<bits/stdc++.h>
using namespace std;
void Lrotate(int arr[],int n,int k){
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<n-k;i++){
        arr[i]=arr[i+k];
    }
    for(int i=n-k;i<n;i++){
        arr[i]=temp[i-n+k];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
    

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
   
 Lrotate(arr,n,k);



}