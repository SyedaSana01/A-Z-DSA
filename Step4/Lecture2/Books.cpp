#include<bits/stdc++.h>
using namespace std;
int CountStudents(vector<int>arr,int pages){
    int n=arr.size();
    int students=1;
    long long Npages=0;
    for(int i=0;i<n;i++){
        if(Npages+arr[i]<=pages){
            Npages+=arr[i];
        }else{
            students++;
            Npages=arr[i];
      }
    }
    return students;
}
int noOfPages(vector<int>&arr,int n,int m){
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid=(low+high)/2;
        int students= CountStudents(arr,mid);
        if(students>m){
            low=mid+1;

        }else{
            high=mid-1;
        }
    }
    return low;

}
int main(){
    int n ,m ;
    cin>>n >>m;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=noOfPages(arr,n,m);
    cout<<ans;

}
