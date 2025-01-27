#include<bits/stdc++.h>
using namespace std;
int Cons(vector<int>&arr){
   int longest;

    int cnt=0;
    int lastSmall=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]=lastSmall){
            cnt=cnt+1;
            lastSmall=arr[i];
        }else if(arr[i]!=lastSmall){
            cnt=1;
            lastSmall=arr[i];
        }
        longest=max(longest,cnt);
    }
    return longest;
}
