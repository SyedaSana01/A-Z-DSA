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
void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next; 
    }
    cout << endl;
}
Node*Rec(Node*head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node*newHead=Rec(head->next);
    Node*front=head->next;
    front->next=head;
    head->next=NULL;
    return newHead;
}
int main(){
    vector<int>arr={12,3,4,1};
    Node*head=AtoDLL(arr);
    head=Rec(head);
    print(head);
}