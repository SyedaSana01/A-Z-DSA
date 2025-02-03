#include<bits/stdc++.h>
using namespace std;
void swapIfGreater(long long arr1[],long long arr2[],int ind1,int ind2){
    if(arr1[ind1]>arr2[ind2]){
        swap(arr1[ind1],arr2[ind2]);
    }
}
void MergeArrays(long long arr1[],long long arr2[],int n,int m){
    int len=n+m;
    int gap=(len/2)+(len %2);
    while(gap>0){
        int left=0;
        int right=right+gap;
        if(left<n && right>=n){
            //arr1,arr2
            swapIfGreater(arr1,arr2,left,right-n);

        }else if(left>=n){
            //arr2 and arr2
            swapIfGreater(arr2,arr2,left-n,right);
        }
        else{
            swapIfGreater(arr1,arr1,left,right);
        }
        
    }
}
