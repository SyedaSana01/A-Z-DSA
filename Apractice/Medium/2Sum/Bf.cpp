#include<bits/stdc++.h>
using namespace std;
 
string Sum2(vector<int>&arr,int target){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                return "YES";
            }
        }
       
    }
    return "NO";
    
    

}
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
   string ans= Sum2(arr,target);
   cout<<ans;
}