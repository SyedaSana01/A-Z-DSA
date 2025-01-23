#include<bits/stdc++.h>
using namespace std;
vector<int> un(vector<int>a1, vector<int>a2){
    set<int>st;
    for(int i=0;i<a1.size();i++){
     st.insert(a1[i]);
    }
  for(int i=0;i<a2.size();i++){
    st.insert(a2[i]);
  }
  vector<int>temp;
  for(auto it:st){
    temp.push_back(it);
  }
  return temp;
}
int main(){
    int n;
    cin>>n;
    vector<int>a1(n);
    vector<int>a2(n);
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<n;i++){
        cin>>a2[i];
    }
    vector<int>result=un(a1,a2);
for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
}
}