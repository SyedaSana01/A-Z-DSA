#include<bits/stdc++.h>
using namespace std;
int second(int arr[],int n){
    int largest=INT_MIN;
    int sLargest=INT_MIN;
    int Smallest=INT_MAX;
    int sSmallest=INT_MAX;
   
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            sLargest=largest;
            largest=arr[i];

        }
        else if(arr[i]>sLargest && sLargest!=largest){
            sLargest=arr[i];
        }
        if(arr[i]<Smallest){
            sSmallest=Smallest;
            Smallest=arr[i];
        }
        else if(arr[i]<sSmallest && sSmallest!=Smallest){
            sSmallest=arr[i];
        }
    }
    return sLargest;
    cout<<endl;
    return sSmallest;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=second(arr,n);
    cout<<ans << endl;
}