#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[],int n){
    set<int>set;
    for(int i=0;i<n;i++){
        set.insert(arr[i]);
        
    }
    int k=set.size();
    int j=0;
    for(int x: set){
        arr[j++]=x;
    }
    return k;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
   int ans= removeDuplicates(arr,n);
   cout<<ans;
}
