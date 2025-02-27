#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*back;

    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }

};
Node*AtoDLL(vector<int>&arr){
    Node*head=new Node(arr[0]);
    Node*prev=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void print(Node*head){
    while(head!=NULL){
        cout<<head->data<< " ";
        head=head->next;

    }
}
Node*InsertHead(Node*head,int val){
    Node*newHead=new Node(val,head,nullptr);
    head->back=newHead; 
    return newHead;
}
Node*InsertK(Node*head,int k,int val){
    if(k==1){
        return InsertHead(head,val);
    }
    Node*temp=head;
    while(temp->next!=NULL){
        int cnt=0;
        cnt++;
        temp=temp->next;
    }
    Node*prev=temp->back;
    Node*newNode=new Node(val,temp,prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
}
int main(){
    vector<int>arr={12,10,3,4};
    Node*head=AtoDLL(arr);
    head=InsertK(head,2,5);
    print(head);
}
