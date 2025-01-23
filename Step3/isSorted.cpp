#include<bits/stdc++.h>
using namespace std;
int isSorted(int n, vector<int>a){
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1]){
          return false;
        }
        
       
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int Sort=isSorted(n,a);
    if(isSorted(n,a)){
    cout<<"Array is Sorted";
    }
    else{
        cout<<"Not Sorted";
    }

}