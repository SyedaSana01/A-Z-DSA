#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){
    
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            
            if(arr[j]<arr[min]){
                min=arr[j];
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}