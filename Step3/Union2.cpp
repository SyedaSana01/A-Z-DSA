#include<bits/stdc++.h>
using namespace std;
vector<int>SortedArray(vector<int>a,vector<int>b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int>UnionArr;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            if(UnionArr.empty() || UnionArr.back()!=a[i]){
                UnionArr.push_back(a[i]);
            }
            i++;

        }else if(a[i]>b[j]){
            if(UnionArr.empty()|| UnionArr.back()!=b[j]){
                UnionArr.push_back(b[j]);
            }
            j++;
        }
        else{
            if (UnionArr.empty() || UnionArr.back() != a[i]) {
                UnionArr.push_back(a[i]);
            }
            i++;
            j++;
        }
        }
    while(i<n1){
         if(UnionArr.empty()|| UnionArr.back()!=a[i]){
                UnionArr.push_back(a[i]);
            }
            i++;

    }
    while(j<n2){
         if(UnionArr.empty() || UnionArr.back()!=b[j]){
                UnionArr.push_back(b[j]);
            }
            j++;
    }
    return UnionArr;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
cin>>a[i];
    }
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<int>result=SortedArray(a,b);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    

}