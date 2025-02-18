#include<bits/stdc++.h>
using namespace std;
int noOfDays(vector<int>&wt,int cap){
    int load=0;
    int days=1;
    int n=wt.size();
    for(int i=0;i<n;i++){
        if(wt[i]+load>cap){
            days+=1;
            load=wt[i];

        }else{
            load+=wt[i];
        }
    }
    return days;
}
int TotalDays(vector<int>&wt,int d){
    int low=*max_element(wt.begin(),wt.end());
    int high=accumulate(wt.begin(),wt.end(),0);
    while(low<=high){
        int mid=(low+high)/2;
        int noDays=noOfDays(wt,mid);
        if(noDays<=d){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return low;
}
int main(){
    int n,d;
    cin >> n >> d;
    vector<int>wt(n);
    for(int i=0;i<n;i++){
        cin>>wt[i];

    }
    int ans=TotalDays(wt,d);
    cout<< ans;
}