#include<bits/stdc++.h>
using namespace std;
void sortArray(vector<int>&arr,int n){
    int low=0,high=n-1,mid=0;
    for(int i=0;i<n;i++){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      sortArray(arr,n);
      for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
      }
 
}