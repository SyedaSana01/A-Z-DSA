#include<bits/stdc++.h>
using namespace std;

string Convert2B(int n){
    if(n==0)return "0";
    string  res ="";
    if(n!=1){
        if(n%2==1){
            res+='1';
        }else{
            res+='0';
        }
        n=n/2;
        
    }
    reverse(res.begin(),res.end()); 
    return res;
   
}
int main(){
    int n;
    cin>>n;
    cout<<Convert2B(n)<<endl;
}
