#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1)
    {
        data=data1;
        next=nullptr;

    }
     
};
int length(Node*head){
    int cnt=0;
    Node*temp=head;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
Node* AtoL(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node*mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int main(){
    vector<int>arr={2,3,4,5};
    Node*head=AtoL(arr);
    cout<<length(head);
}