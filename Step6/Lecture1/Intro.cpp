#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};
int main(){
    vector<int>arr={2,4,5,7};
    Node* y=new Node(arr[0],nullptr);
    cout<<y;
    Node z = Node(arr[0],nullptr); //Creating an object
    cout<<z.data;
    Node* a= new Node(arr[0],nullptr); //Allocating another node
    cout<<a->data; 
    Node* b=new Node(arr[0],nullptr); //Printing 
    cout<<b->next;
}