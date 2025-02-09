#include<bits/stdc++.h>
using namespace std;
vector<int> Leader(vector<int>&a,int n){
    vector<int>ans;
    for(int i=0;i<n;i++){
        bool leader=true;
    

    
    for(int j=i+1;j<n;j++){
        if(a[j]>a[i]){
            leader=false;
            break;

        }
        

    }
    if(leader){
        ans.push_back(a[i]);
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
      vector<int> ans=Leader(arr,n);
      for(int leaders : ans){
        cout<<leaders << " ";
        
      }
      
    }