#include<bits/stdc++.h>
using namespace std;
pair<int,int> SearchMatrix(vector<vector<int>>&matrix,int target){
    int n=matrix.size();
    int m = matrix[0].size();
    int row=0;
    int col=m-1;
    while(row<n && col>=0){
        if(matrix[row][col]==target){
            return {row,col};
        }else if(matrix[row][col]>target){
            col--;
        }else{
            row++;
        }
    }
    return {-1,-1};
}
int main(){
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];

        }
    }
    pair<int,int> ans=SearchMatrix(matrix,target);
    if(ans.first==-1){
        cout<<"Element not found";
    }else{
        cout<<ans.first << " "<<ans.second;
    }


}