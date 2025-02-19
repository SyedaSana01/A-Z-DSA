#include<bits/stdc++.h>
using namespace std;
int FindFirst(vector<int>&arr,int n,int m){
    int low=0;
    int first=-1;
    int high=n-1;
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]==m){
            first=mid;
            high=mid-1;
            
        }else if(arr[mid]<m){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return first;
}
int FindLast(vector<int>&arr,int n,int m){
    int low=0;
    int first=-1;
    int high=n-1;
    int last=-1;
    while(low<high){
        int mid=(low+high)/2;
        if(arr[mid]==m){
            last=mid;
            low=mid+1;

        }else if(arr[mid]>m){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return last;
}
int main(){
    int n ,m;
    cin>>n >> m;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int first=FindFirst(arr,n,m);
   if(first==-1){
    return -1;
   }
   int last=FindLast(arr,n,m);
   
    cout<<first << " " << last << endl;
    }
