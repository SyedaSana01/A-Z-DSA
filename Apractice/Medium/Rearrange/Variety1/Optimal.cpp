#include<bits/stdc++.h>
using namespace std;
vector<int>Rearrange(vector<int>&arr,int n){
    vector<int>ans(n,0);
    //sorting 
    int pos=0,neg=1;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[neg]=arr[i];
            neg+=2;
        }else{
            ans[pos]=arr[i];
            pos+=2;
        }
        

        
    }
    return ans;
   
   

}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     arr= Rearrange(arr,n);
      for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
      }
 
}