#include<bits/stdc++.h>
using namespace std;
vector<int>moveZeros(int n,vector<int>arr){
    vector<int>temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);

        }

    }
    int nz=temp.size();
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
    for(int i=nz;i<n;i++){
        arr[i]=0;
    }
    return arr;

}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   arr= moveZeros(n,arr);
   for(int i=0;i<n;i++){
    cout<<arr[i]<< " ";
   }
   
}
