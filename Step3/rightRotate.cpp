#include<bits/stdc++.h>
using namespace std;
void rotate(int a[],int n, int d ){
    reverse(a,a+n);
    reverse(a+d,a+n);
    reverse(a,a+n);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d;
    cin>>d;
    rotate(a,n,d);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
