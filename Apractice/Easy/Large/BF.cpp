#include<bits/stdc++.h>
using namespace std;
int large( vector<int> a){
    sort(a.begin(),a.end());
    return a[a.size()-1];

   

}
int main(){
    int n;
    cin>>n;
     vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   int ans= large(a);
   cout<<ans;
}