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
Node*AtoL(vector<int>&arr){
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
Node*removeK(Node*head,int N){
    Node*slow=head;
    Node*fast=head;
    for(int i=0;i<N;i++){
        if(fast==NULL)return head;
        fast=fast->next;
    }
   
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
        Node*deLNode=slow->next;
        slow->next=slow->next->next;
        delete deLNode;
        return head;
    
}
int main(){
    vector<int>arr={10,12,3,4};
    Node*head=AtoL(arr);
    head=removeK(head,2);
    print(head);
}