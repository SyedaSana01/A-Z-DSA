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
Node*EvenOdd(Node*head){
    if(head==NULL &&head->next==NULL)
    return head;
    Node*even=head->next;
    Node*odd=head;
    Node*evenHead=even;
    while(even!=NULL && even->next!=NULL){
        odd->next=odd->next->next;
        even->next=even->next->next;

        odd=odd->next;
        even=even->next->next;
     
    }
    odd->next=evenHead;
    return head;

}
int main(){
    vector<int>arr={12,3,4,5};
    Node*head=AtoDLL(arr);
    head=EvenOdd(head);
    print(head);
}