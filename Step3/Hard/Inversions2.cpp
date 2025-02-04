#include<bits/stdc++.h>
using namespace std;
int merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    vector<int>temp;
    int cnt=0;
    while(left<=right && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            cnt+=(mid-left+1);
            right++;

        }
        if(left[arr]<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        if(right[arr]<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
        return cnt;



    }
}
    int mergeSort(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if (low >= high) return cnt;
    int mid = (low + high) / 2 ;
    cnt += mergeSort(arr, low, mid);  // left half
    cnt += mergeSort(arr, mid + 1, high); // right half
    cnt += merge(arr, low, mid, high);  // merging sorted halves
    return cnt;
    }
int numberOfInversions(vector<int>&a, int n) {

    // Count the number of pairs:
    return mergeSort(a, 0, n - 1);
}


