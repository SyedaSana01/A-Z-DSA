#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int>&arr,int n,int x){
    int ans=n;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }else {
            low=mid+1;
        }
    }
    return ans;
}
int ones(vector<vector<int>>&matrix,int n,int m){
    int cnt_max=0;
    int index=-1;
    for(int i=0;i<n;i++){
    int cnt_ones=m-lowerbound(matrix[i],m,1);
    if(cnt_ones>cnt_max){
        cnt_max=cnt_ones;
        index=i;
    }
    }
    return index;

}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cin>> matrix[i][j];
        }
    }
    
    int ans=ones(matrix,n,m);
    cout<<ans;


}