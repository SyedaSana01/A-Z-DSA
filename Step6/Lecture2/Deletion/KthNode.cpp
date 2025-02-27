#include<bits/stdc++.h>
using namespace std;
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
        Node*temp=new Node(arr[i]);
        prev->next=temp;
        temp->back=prev;
        prev=temp;
    }
    return head;
}
void print(Node*head){
    while(head!=NULL){
        cout<<head->data << " ";
        head=head->next;

    } 
}
Node*DelHead(Node*head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node*prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;
}
Node*DelTail(Node*head){
    if(head==NULL||head->next==NULL){
        return NULL;
    }
    Node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node*prev=tail->back;
    prev->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;
}
Node*DelK(Node*head,int k)
{
    int cnt=0;
    Node*temp=head;
   
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            break;
        }
        temp=temp->next;
    }
    Node*prev=temp->back;
    Node*front=temp->next;
    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
         return DelHead(head);
    }
    else if(front==NULL){
        return DelTail(head);
    }
    prev->next=front;
    front->back=prev;

    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;

    return head;

}
int main(){
    vector<int>arr{12,13,4,5};
    Node*head=AtoDLL(arr);
    head=DelK(head,2);
    print(head);

}