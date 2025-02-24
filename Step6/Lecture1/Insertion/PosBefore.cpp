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
    Node(int data1){
        data=data1;
        next=NULL;
        
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
Node*print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data << " ";
        temp=temp->next;
    }
    return head;
}
Node* PosBefore(Node*head,int el,int val){
    if(head==NULL){
        return head;
    }
    if(head->data==val){
        return new Node(el,head);
    }
    Node*temp=head;
    while(temp!=NULL){
        if(temp->next->data==val){
            Node*x=new Node(el,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}
int main(){
    vector<int> arr = {12, 14, 15, 6};
    Node* head = AtoL(arr);
    head = PosBefore(head, 1,15);
    print(head);  
    return 0;
}