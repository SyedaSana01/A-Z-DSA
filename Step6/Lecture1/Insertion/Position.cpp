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
Node* InsertAtPos(Node*head,int el,int k){
    if(head==NULL){
        if(k==1){
            return new Node(el);
        }
    }
    if(k==1){
        return new Node(el,head);
    }
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++; 
        if(cnt==(k-1)){
            Node*x=new Node(el,temp->next);
            temp->next=x;

        }
        temp=temp->next;

    }
    return head;
}
int main(){
    vector<int>arr={12,13 ,5,4};
    Node*head=AtoL(arr);
    head=InsertAtPos(head,18,3);
    print(head);

}