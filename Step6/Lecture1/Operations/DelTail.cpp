#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node (int data1,Node* next1){
        data=data1;
        next=next1;

    }
    Node (int data1){
        data=data1;
        next=nullptr;
    }
    
};
Node* AtoL(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
Node* print(Node*head){
    while(head!=NULL){
        cout<<head->data <<" ";
        head=head->next;
    }
    return head;
}
Node* deleteTail(Node*head){
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
        delete(temp->next);
        temp->next=nullptr;
    
    return head;
}
int main(){
    vector<int>arr={12,3,4,5};
    Node* head=AtoL(arr);
    head=deleteTail(head);
    print(head);

}
