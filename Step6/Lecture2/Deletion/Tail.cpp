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
Node* AtoDLL(vector<int>&arr){
    Node*head=new Node(arr[0]);
    Node*prev=head;
    for(int i=1;i<arr.size();i++){
        Node*temp= new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;

    }
    return head;
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data << " ";
        head=head->next;
    }
}
Node* DelTail(Node*head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* prev= tail->back;
    prev->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;

}
int main(){
    vector<int>arr={12,3,4,5};
    Node*head=AtoDLL(arr);
    head=DelTail(head);
    print(head);
    return 0;


}